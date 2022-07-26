#include <stdio.h>

const int SIZE = 3;

/*
value of p_array[0] = 1
address of p_array[0] = 000000000061FDC4
value of p_array[1] = 2
address of p_array[1] = 000000000061FDC8
value of p_array[2] = 3
address of p_array[2] = 000000000061FDCC
-------------------------------------
value of char_array[0] = a
address of char_array[0] = 0000000000404066
value of char_array[1] = b
address of char_array[1] = 0000000000404068
value of char_array[2] = c
address of char_array[2] = 000000000040406A
*/
int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3};

    // Declaration of an array of Pointers to integers
    // Each element in the p_array is a pointer to an int
    int *p_array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        /* The address assigned as an integer */
        p_array[i] = &array[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("value of p_array[%d] = %d\n", i, *p_array[i]);
        printf("address of p_array[%d] = %p\n", i, p_array[i]);
    }

    printf("-------------------------------------\n");

    const char *char_array[] = {
        "a",
        "b",
        "c",
        "d",
    };

    for (int i = 0; i < SIZE; i++)
    {
        printf("value of char_array[%d] = %s\n", i, char_array[i]);
        printf("address of char_array[%d] = %p\n", i, char_array[i]);
    }

    return 0;
}
