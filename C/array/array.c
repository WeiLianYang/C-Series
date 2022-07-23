#include <stdio.h>

/*
array[1] = 2
array[0] = 10
array[1] = 20
array[2] = 30
array[3] = 40
array[4] = 50
*/
int main(int argc, char const *argv[])
{
    // declare array
    int array[5] = {1, 22, 3, 4, 5};
    array[1] = 2;
    printf("array[1] = %d \n", array[1]); // 2

    for (int i = 0; i < 5; i++)
    {
        array[i] *= 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
