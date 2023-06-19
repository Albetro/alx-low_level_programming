#!/bin/bash
gcc -wall wextra -werror -pendatic -c fPIC *.c
gcc _shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
