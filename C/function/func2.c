#include <stdio.h>

/* declare sawp function */
extern void swap(int a, int b);

/*
gcc func2.c func3.c
./a.exe
*/
int main(int argc, char const *argv[])
{

    int a = 1;
    int b = 2;

    printf("before swap, a = %d\n", a); // 1
    printf("before swap, b = %d\n", b); // 2

    swap(a, b);

    printf("after swap, a = %d\n", a); // 1
    printf("after swap, b = %d\n", b); // 2

    return 0;
}