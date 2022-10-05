#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *seconds);

/* 

a = 1
p1 = 0x7ff7bd74d05c
*p1 = 1
p2 = 0x7ff7bd74d050
**p2 = 1
seconds: 1664954637

 */
int main(int argc, char const *argv[])
{
    int a; 

    // pointer p1
    int *p1;

    // pointer p2
    int **p2;

    a = 1;

    /* get address of a */
    p1 = &a;

    /* get address of p1 */
    p2 = &p1;

    printf("a = %d\n", a);
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);
    printf("p2 = %p\n", p2);
    printf("**p2 = %d\n", **p2);

    unsigned long s;
    // Pass a pointer as an argument to a function
    getSeconds(&s);
    printf("seconds: %ld\n", s);

    return 0;
}


void getSeconds(unsigned long *seconds)
{
    /* Gets the current number of seconds */
    *seconds = time(NULL);
    return;
}
