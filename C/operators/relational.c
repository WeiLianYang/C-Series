#include <stdio.h>

/* 

x != y
x >= y
x > y
x <= y
y >= x

 */
int main(int argc, char const *argv[])
{

    int x = 2;
    int y = 1;

    if (x == y)
    {
        printf("x == y\n");
    }
    else
    {
        printf("x != y\n");
    }
    if (x < y)
    {
        printf("x < y\n");
    }
    else
    {
        printf("x >= y\n");
    }
    if (x > y)
    {
        printf("x > y\n");
    }
    else
    {
        printf("x <= y\n");
    }
    /* change value */
    x = 1;
    y = 2;
    if (x <= y)
    {
        printf("x <= y\n");
    }
    if (y >= x)
    {
        printf("y >= x\n");
    }

    return 0;
}
