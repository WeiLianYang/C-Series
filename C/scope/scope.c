#include <stdio.h>

// global variable
int g = 5;

int main(int argc, char const *argv[])
{
    /* Local variable */
    int a, b;
    int c;

    /* Actual initialization */
    a = 1;
    b = 2;
    c = a + b;

    // a = 1, b = 2, c = 3
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("g = %d \n", g); // 5

    int g = 6;
    printf("g = %d \n", g); // 6

    return 0;
}
