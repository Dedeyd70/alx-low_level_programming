#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.c
export LD_lIBRARY_PATH=.:$LD_LIBRARY_PATH
