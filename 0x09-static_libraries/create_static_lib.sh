#!/bin/bash
gcc -Wall -Pedantic -Wextra -Werror -c *.c
ar -rc liball.a *.o
