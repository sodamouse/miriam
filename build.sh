#! /bin/bash

echo "Building statically-linked executable..."

set -xe

cc -x c --std=c89 -Wall -Wextra -Wpedantic -Werror -O3 -o test -static test.c && ./test
