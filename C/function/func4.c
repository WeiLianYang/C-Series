
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; /* 保存地址 x 的值 */
    *x = *y;   /* 把 y 赋值给 x */
    *y = temp; /* 把 temp 赋值给 y */

    return;
}

void swap(int *x, int *y);

int main()
{
    int a = 1;
    int b = 2;

    printf("before swap, a = %d\n", a); // a = 1
    printf("before swap, b = %d\n", b); // b = 2

    /*
     * swap value
     * &a represents a pointer to a, the address of the variable a
     * &b represents a pointer to b, the address of the variable b
     */
    swap(&a, &b);

    printf("after swap, a = %d\n", a); // a = 2
    printf("after swap, b = %d\n", b); // b = 1

    return 0;
}