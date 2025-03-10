import z3

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
        elif z3.is_var(expr):  # Bound variable (e.g., Var(0), Var(1), etc.)
            idx = z3.get_var_index(expr)
            if idx < len(bound_vars):
                return bound_vars[idx][0]
            else:
                raise ValueError(f"Variable index {idx} out of bounds for bound variables {bound_vars}")
        elif z3.is_add(expr):
            return '(' + ' + '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_sub(expr):
            return '(' + ' - '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_mul(expr):
            return '(' + ' * '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_div(expr):
            return '(' + ' / '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_eq(expr):
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' == ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        elif z3.is_le(expr):
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' <= ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        elif z3.is_ge(expr):
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' >= ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        elif z3.is_lt(expr):
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' < ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        elif z3.is_gt(expr):
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' > ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        elif z3.is_and(expr):
            return '(' + ' && '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_or(expr):
            return '(' + ' || '.join(self.expr_to_c(arg, bound_vars) for arg in expr.children()) + ')'
        elif z3.is_not(expr):
            return '(!' + self.expr_to_c(expr.arg(0), bound_vars) + ')'
        elif z3.is_mod(expr):
            # TODO: exact mod behavior
            return '(' + self.expr_to_c(expr.arg(0), bound_vars) + ' % ' + self.expr_to_c(expr.arg(1), bound_vars) + ')'
        else:
            return None

    def smt_sort_to_c(self, sort):
        lookup = {
            z3.Z3_BOOL_SORT: "_Bool",
            z3.Z3_INT_SORT: "int",
        }
        if sort.kind() not in lookup:
            raise NotImplementedError(f"Sort {sort} not supported.")
        return lookup[sort.kind()]