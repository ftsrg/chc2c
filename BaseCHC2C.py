#  Copyright 2025 Budapest University of Technology and Economics
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

import z3
import re


# As long as the CHC is nonrecursive, this can be used
class BaseCHC2C:

    def expr_to_c(self, expr, bound_vars):
        """
        Recursively convert a Z3 expression to a C expression using AST traversal.
        We ensure that parentheses are used where necessary to preserve operator precedence.
        `bound_vars` is a list of variable names corresponding to bound variables in the quantifier.
        """
        if z3.is_int_value(expr):
            return str(expr.as_long())
        elif z3.is_true(expr):
            return "1"
        elif z3.is_false(expr):
            return "0"
        elif z3.is_var(expr):  # Bound variable (e.g., Var(0), Var(1), etc.)
            idx = z3.get_var_index(expr)
            if idx < len(bound_vars):
                return self.sanitize_identifier(bound_vars[idx][0])
            else:
                raise ValueError(
                    f"Variable index {idx} out of bounds for bound variables {bound_vars}"
                )
        elif z3.is_add(expr):
            return (
                "("
                + " + ".join(self.expr_to_c(arg, bound_vars) for arg in expr.children())
                + ")"
            )
        elif z3.is_sub(expr):
            return (
                "("
                + " - ".join(self.expr_to_c(arg, bound_vars) for arg in expr.children())
                + ")"
            )
        elif z3.is_mul(expr):
            return (
                "("
                + " * ".join(self.expr_to_c(arg, bound_vars) for arg in expr.children())
                + ")"
            )
        elif z3.is_div(expr):
            return (
                "("
                + " / ".join(self.expr_to_c(arg, bound_vars) for arg in expr.children())
                + ")"
            )
        elif z3.is_eq(expr):
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " == "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_le(expr):
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " <= "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_ge(expr):
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " >= "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_lt(expr):
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " < "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_gt(expr):
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " > "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_and(expr):
            return (
                "("
                + " && ".join(
                    self.expr_to_c(arg, bound_vars) for arg in expr.children()
                )
                + ")"
            )
        elif z3.is_or(expr):
            return (
                "("
                + " || ".join(
                    self.expr_to_c(arg, bound_vars) for arg in expr.children()
                )
                + ")"
            )
        elif z3.is_not(expr):
            return "(!" + self.expr_to_c(expr.arg(0), bound_vars) + ")"
        elif z3.is_mod(expr):
            # TODO: exact mod behavior
            return (
                "("
                + self.expr_to_c(expr.arg(0), bound_vars)
                + " % "
                + self.expr_to_c(expr.arg(1), bound_vars)
                + ")"
            )
        elif z3.is_app(expr) and expr.decl().kind() == z3.Z3_OP_UNINTERPRETED:
            return None  # the subclass should handle this
        elif z3.is_app(expr):
            kind = expr.decl().kind()
            if kind == z3.Z3_OP_UMINUS:
                return "(-" + self.expr_to_c(expr.arg(0), bound_vars) + ")"
            elif kind == z3.Z3_OP_ITE:
                return (
                    "("
                    + self.expr_to_c(expr.arg(0), bound_vars)
                    + " ? "
                    + self.expr_to_c(expr.arg(1), bound_vars)
                    + " : "
                    + self.expr_to_c(expr.arg(2), bound_vars)
                    + ")"
                )
            elif kind == z3.Z3_OP_IDIV:
                return (
                    "("
                    + " / ".join(
                        self.expr_to_c(arg, bound_vars) for arg in expr.children()
                    )
                    + ")"
                )
            raise NotImplementedError(f"Operator not implemented: {expr.decl()}")

    def smt_sort_to_c(self, sort):
        lookup = {
            z3.Z3_BOOL_SORT: "_Bool",
            z3.Z3_INT_SORT: "int",
        }
        if sort.kind() not in lookup:
            raise NotImplementedError(f"Sort {sort} not supported.")
        return lookup[sort.kind()]

    def sanitize_identifier(self, identifier):
        # Ensure the first character is a letter or underscore.
        identifier = re.sub(r"^[^A-Za-z_]", "_", identifier)
        # Replace any character that is not a letter, digit, or underscore.
        identifier = re.sub(r"[^A-Za-z0-9_]", "_", identifier)
        return identifier
