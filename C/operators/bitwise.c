#include <stdio.h>

/* 
z = x & y, z = 2
z = x | y, z = 63
z = x ^ y, z = 61
z = ~x, z = -51
z = x << 2, z = 200
z = x >> 2, z = 12
 */
int main(int argc, char const *argv[])
{
    /* 50 = 0011 0010 */
    unsigned int x = 50;

    /* 13 = 0000 1111 */
    unsigned int y = 15; 

    int z = 0;

    z = x & y; /* 2 = 0000 0010 */
    printf("z = x & y, z = %d\n", z);

    z = x | y; /* 63 = 0011 1111 */
    printf("z = x | y, z = %d\n", z);

    z = x ^ y; /* 61 = 0011 1101 */
    printf("z = x ^ y, z = %d\n", z);

    z = ~x; /*-51 = 0011 0011 */
    printf("z = ~x, z = %d\n", z);

    z = x << 2; /* 200 = 1100 1000 */
    printf("z = x << 2, z = %d\n", z);

    z = x >> 2; /* 12 = 0000 1100 */
    printf("z = x >> 2, z = %d\n", z);

    return 0;
}
