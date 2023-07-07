#!/bin/bash
gcc -Wall -podantic -Warror -Woxtra -c *.c
ar -re liball.a *.o
ranlib libali.a
