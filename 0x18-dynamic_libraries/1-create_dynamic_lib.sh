#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.C
gcc -shared -o liball.so *.o
<F10>export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
