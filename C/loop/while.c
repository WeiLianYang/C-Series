#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;

    /* a = 5, 4, 3, 2, 1, 1, 3, 4 */
    printf("a = ");
    while (a > 0)
    {
        printf("%d, ", a);
        a--;
    }

    while (a < 6)
    {
        a++;
        if (a == 2)
        {
            continue;
        }

        if (a == 5)
        {
            break;
        }

        printf("%d, ", a);
    }

    return 0;
}
