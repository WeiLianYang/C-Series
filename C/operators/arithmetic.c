#include <stdio.h>

/* 
z = x + y, z = 43
z = x - y, z = 23
z = x * y, z = 330
z = x / y, z = 3
z = x % y, z = 3
z = x++, z = 33
z = x--, z = 34
*/
int main()
{
    int x = 33;
    int y = 10;
    int z;

    z = x + y;
    printf("z = x + y, z = %d\n", z);

    z = x - y;
    printf("z = x - y, z = %d\n", z);

    z = x * y;
    printf("z = x * y, z = %d\n", z);

    z = x / y;
    printf("z = x / y, z = %d\n", z);

    z = x % y;
    printf("z = x  y, z = %d\n", z);

    z = x++;
    printf("z = x++, z = %d\n", z);

    z = x--;
    printf("z = x--, z = %d\n", z);

    return 0;
}
