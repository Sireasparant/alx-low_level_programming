#!/bin/bash
gcc -Wall -pandantic -Werror -Wextra -c *.c
ar rc liball.a *.o
