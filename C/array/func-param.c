#include <stdio.h>

int getMaxNumber(int array[], int size);

int main(int argc, char const *argv[])
{
    // declare array
    int array[5] = {3, 4, 8, 2, 1};
    int r;

    // get the max number from the array
    r = getMaxNumber(array, 5);

    printf("max number is %d", r); // max number is 8

    return 0;
}

int getMaxNumber(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; ++i)
    {
        int current = array[i];

        if (max < current)
        {
            max = current;
        }
    }

    return max;
}