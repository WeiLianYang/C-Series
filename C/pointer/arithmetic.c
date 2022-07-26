#include <stdio.h>

/*

address: array[0] = 000000000061FE04
  value: array[0] = 1
address: array[1] = 000000000061FE08
  value: array[1] = 2
address: array[2] = 000000000061FE0C
  value: array[2] = 3

-------------------------------------

address: array[2] = 000000000061FE0C
  value: array[2] = 3
address: array[1] = 000000000061FE08
  value: array[1] = 2
address: array[0] = 000000000061FE04
  value: array[0] = 1

-------------------------------------

address: array[0] = 000000000061FE04
  value: array[0] = 1
address: array[1] = 000000000061FE08
  value: array[1] = 2
address: array[2] = 000000000061FE0C
  value: array[2] = 3

1. Each increment of the pointer actually points to the location of the next element.
2. Each time the pointer decays, it points to the storage location of the previous element.
3. The number of bytes a pointer jumps when incrementing or decrementing depends on the length of the data type of the variable to which the pointer points, such as int, which is 4 bytes.

*/
int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3};

    int i, *p;

    /* point to first position */
    p = array;

    for (i = 0; i < 3; i++)
    {
        printf("address: array[%d] = %p\n", i, p);
        printf("  value: array[%d] = %d\n", i, *p);

        /* Point to the next position */
        p++;
    }

    printf("-------------------------------------\n");

    /* The address of the last element in the pointer */
    p = &array[2];

    for (i = 2; i >= 0; i--)
    {
        printf("address: array[%d] = %p\n", i, p);
        printf("  value: array[%d] = %d\n", i, *p);

        p--;
    }

    printf("-------------------------------------\n");

    p = array;
    i = 0;
    while (p <= &array[2])
    {
        printf("address: array[%d] = %p\n", i, p);
        printf("  value: array[%d] = %d\n", i, *p);

        p++;
        i++;
    }

    return 0;
}
