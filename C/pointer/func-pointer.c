#include <stdlib.h>  
#include <stdio.h>
 
void populate_array(int *array, int arraySize, int (*getNextValue)(void))
{
    for (int i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}
 
int getNextRandom()
{
    return rand();
}

/* 16807 282475249 1622650073 984943658 1144108930 470211272 */
int main(int argc, char const *argv[])
{
    int size = 6;
    int array[size];

    /* getNextRandom as an argument to the function*/
    populate_array(array, size, getNextRandom);

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}