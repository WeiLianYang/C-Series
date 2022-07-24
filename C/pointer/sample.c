#include <stdio.h>

/*
A pointer is a memory address, and a pointer variable is a variable that holds the memory address.
Just like any other variable or constant, you must declare other variables before using Pointers to store their addresses.
The general form of a pointer variable declaration is: type *var_name;
*/
int main(int argc, char const *argv[])
{
    int var = 1;
    // declare pointer variable
    int *p;
    p = &var;

    // address of the var variable: 0x7ff7bea1d07c
    printf("address of the var variable: %p\n", p);

    /*
     * 1. All real data types, whether integer, floating point, character,
     * or any other data type, have the same type for the value of the pointer, which is a long hexadecimal number representing the memory address.
     * 2. The only difference between Pointers of different data types is that the variable or constant to which the pointer points is of different data types.
     */
    int *pointer_i;    /* an integer pointer */
    double *pointer_d; /* a pointer to double */
    float *pointer_f;  /* a float pointer */
    char *pointer_ch;  /* a character pointer */

    return 0;
}
