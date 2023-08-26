#!/bin/bash
gcc -shared -o printit.so -fPIC jackpot.c
export LD_PRELOAD=./printit.so:$LD_LIBRARY_PATH
