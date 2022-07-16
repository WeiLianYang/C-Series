#include <stdio.h>

const int CONST_VAL = 100;

#define DEF_VAL1 2

#define DEF_VAL2 "use #define to define constant value"

int main()
{
    printf("%s \n", DEF_VAL2);

    printf("const value: %d, %d \n", CONST_VAL, DEF_VAL1);

    // decimalism
    const int t = 1;

    // octonary
    const int e = 01;

    // hexadecimal
    const int s = 0x1;

    // unsigned integer
    const int b = 10u;

    // long integer
    const long l = 1L;
    const long l2 = 1l;

    // unsigned long integer
    const long c3 = 1ul;

    // float number
    const float f = .3;
    const float f2 = 0.31;

    // double number
    const double d1 = 3.1415e2L;
    const double d2 = 3.1415e-2L;

    // char
    const char c1 = 'm';
    const char c2 = 'f';

    // use %d to print integer value
    printf("integer: %d \n", t);

    // use %ld to print long integer value
    printf("long integer: %ld \n", l);

    // use %lf to print float value
    printf("float number: %lf \n", f);

    // use %lf to print double value
    printf("double number: %lf, %lf \n", d1, d2);

    // use %c to print char value
    printf("char value: %c, %c \n", c1, c2);

    return 0;
}