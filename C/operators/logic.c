#include <stdio.h>


/* 
x && y is true
x || y is true
change value
x && y is false
!(x && y) is true
 */
int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 2;
    int z;

    if (x && y)
    {
        printf("x && y is true\n");
    }
    if (x || y)
    {
        printf("x || y is true\n");
    }
    printf("change value\n");
    /* change value */
    x = 0;
    y = 1;
    if (x && y)
    {
        printf("x && y is true\n");
    }
    else
    {
        printf("x && y is false\n");
    }
    if (!(x && y))
    {
        printf("!(x && y) is true\n");
    }

    return 0;
}
