#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c | Xargs ar -rc liball.a *.o
