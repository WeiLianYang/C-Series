#include <stdio.h>

/* 
x = 10, y = 10
y += x, y = 20
y -= x, y = 10
y *= x, y = 100
y /= x, y = 10
y %= x, y = 0
y <<= 2, y = 0
y >>= 2, y = 0
y &= 2, y = 0
y ^= 2, y = 2
y |= 2, y = 2
 */
int main(int argc, char const *argv[])
{
    int x = 10;
    int y;

    y = x;
    printf("x = %d, y = %d\n", x, y);

    y += x;
    printf("y += x, y = %d\n", y);

    y -= x;
    printf("y -= x, y = %d\n", y);

    y *= x;
    printf("y *= x, y = %d\n", y);

    y /= x;
    printf("y /= x, y = %d\n", y);

    y = 200;
    y %= x;
    printf("y %%= x, y = %d\n", y);

    y <<= 2;
    printf("y <<= 2, y = %d\n", y);

    y >>= 2;
    printf("y >>= 2, y = %d\n", y);

    y &= 2;
    printf("y &= 2, y = %d\n", y);

    y ^= 2;
    printf("y ^= 2, y = %d\n", y);

    y |= 2;
    printf("y |= 2, y = %d\n", y);
}