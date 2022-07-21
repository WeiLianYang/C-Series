#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    printf("a = ");
    do
    {
        a++;
        if (a == 3)
        {
            continue;
        }
        if (a == 5)
        {
            break;
        }
        printf("%d, ", a);
    } while (a < 6); // a = 2, 4,

    printf("a = ");

LOOP:
    do
    {
        if (a == 8)
        {
            a++;
            goto LOOP;
        }
        printf("%d, ", a);
        a++;
    } while (a < 10); // a = 5, 6, 7, 9, 

    return 0;
}
