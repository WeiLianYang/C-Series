#include <stdio.h>

// references variables defined in arithmetic.c
int x = 3;
int y = 4;

int multiply();

// execute: gcc arithmetic.c variable2.c -o main
// main
// result: 12
int main(void)
{
    int result = multiply();
    printf("result: %d\n", result);

    return 0;
}