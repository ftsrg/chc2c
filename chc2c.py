import argparse

from LinearCHC2C import LinearCHC2C
from NonLinearCHC2C import NonLinearCHC2C


def main():
    parser = argparse.ArgumentParser(
        prog='CHC2C',
        description='Converts CHC files in the SMT-LIB format to C code for verification.',
        epilog='See https://chc-comp.github.io/format.html for the documentation of the format.')

    parser.add_argument('filename')

    parser.add_argument('-o', '--out', default='chc.c')
    parser.add_argument('--recursive', action="store_true")

    args = parser.parse_args()
    with open(args.filename, 'r') as f_in:
        if args.recursive:
            program = NonLinearCHC2C().chc_to_c_program(f_in.read(), args.out)
        else:
            program = LinearCHC2C().chc_to_c_program(f_in.read(), args.out)
        with open(args.out, 'w') as f_out:
            f_out.write(program)


if __name__=="__main__":
    main()
