#!/bin/bash
SOURCE=$1
OUTPUT=test.out
echo "컴파일 중: $SOURCE"
g++ -std=c++14 -Wall "$SOURCE" -o $OUTPUT && ./$OUTPUT