#include <stdio.h>

/* i = 1, 2, 3, 4, j = 4, 3, 2, 1, a = 1, a = 3 */
int main(int argc, char const *argv[])
{
    printf("i = ");
    for (int i = 1; i < 5; i++)
    {
        printf("%d, ", i);
    }

    printf("j = ");
    for (int j = 4; j > 0; j--)
    {
        printf("%d, ", j);
    }

    for (int a = 1; a < 5; a++)
    {
        if (a == 2)
        {
            continue;
        }
        if (a == 4)
        {
            break;
        }
        printf("a = %d, ", a);
    }

    return 0;
}
