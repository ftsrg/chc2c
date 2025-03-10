#!bash

./chc2c.py $@ -o out.c
gcc -c -Wall out.c