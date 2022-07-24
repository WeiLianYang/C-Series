#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// return array
int *getArray()
{
    static int array[5];

    // Initialize the random function seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
    {
        array[i] = rand();
        printf("array[%d] = %d\n", i, array[i]);
    }

    return array;
}

/*
array[0] = 666357150
array[1] = 337400945
array[2] = 1340854535
array[3] = 48778127
array[4] = 1622710982
*(array + 0) = 666357150
*(array + 1) = 337400945
*(array + 2) = 1340854535
*(array + 3) = 48778127
*(array + 4) = 1622710982
*/
int main(int argc, char const *argv[])
{
    int *array = getArray();
    for (int i = 0; i < 5; i++)
    {
        printf("*(array + %d) = %d\n", i, *(array + i));
    }

    return 0;
}
