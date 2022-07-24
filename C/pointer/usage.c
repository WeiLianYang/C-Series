#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 1;

    // declare a pointer
    int *pointer_var;

    /* Store the address of var in a pointer variable */
    pointer_var = &var;

    printf("var variable address: %p\n", &var); // 0x7ff7bf6d0088

    printf("pointer_var address where the variable is stored: %p\n", pointer_var); // 0x7ff7bf6d0088

    printf("*pointer_var variable value: %d\n", *pointer_var); // 1

    int *pointer_null = NULL;

    /*
     * Memory address 0 is of particular importance
     * because it indicates that the pointer does not point to an accessible memory location
     */

    // pointer_null address: 0x0
    printf("pointer_null address: %p\n", pointer_null);

    // pointer_null is a null pointer
    if (pointer_null)
    {
        printf("pointer_null is not a null pointer");
    }
    if (!pointer_null)
    {
        printf("pointer_null is a null pointer");
    }

    return 0;
}