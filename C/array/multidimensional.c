#include <stdio.h>

/* 
array[0][0] = 1
array[0][1] = 2
array[0][2] = 3
array[1][0] = 4
array[1][1] = 5
array[1][2] = 6
 */
int main(int argc, char const *argv[])
{
    // 2 rows, 3 columns
    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int array2[2][3] = {
        1, 2, 3,
        4, 5, 6};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    return 0;
}
