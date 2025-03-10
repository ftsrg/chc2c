#!/bin/bash

set -e

./chc2c.py $@ -o out.c && gcc -c -Wall -Werror -Wno-infinite-recursion out.c && echo "success"