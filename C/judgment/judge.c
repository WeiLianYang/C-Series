#include <stdio.h>

/*
 * x < y
 * a = b
 */
void judge1()
{
    int x = 1;
    int y = 2;

    if (x < y)
    {
        printf("x < y \n");
    }
    else
    {
        printf("x >= y \n");
    }

    // sample 2
    int a = 2;
    int b = 2;

    if (a < b)
    {
        printf("a < b \n");
    }
    else if (a == b)
    {
        printf("a = b \n");
    }
    else
    {
        printf("a > b \n");
    }
}

/*
 * C assumes true for any non-zero and non-null value, and false for zero or null.
 *
 * false, zero or null
 * true, non-zero and non-null
 */
void judgeBool(int param)
{
    (param) ? printf("true, non-zero and non-null \n") : printf("false, zero or null \n");
}

/*
 * level 3
 */
void judgeSwitch()
{
    int level = 3;
    switch (level)
    {
    case 1:
        printf("level 1");
        break;
    case 2:
        printf("level 2");
        break;
    case 3:
        printf("level 3");
        break;
    case 4:
        printf("level 4");
        break;
    default:
        printf("level match failed");
        break;
    }
}

int main(int argc, char const *argv[])
{
    // sample 1
    judge1();

    // sample 3
    judgeBool(0);
    judgeBool(1);

    // sample 4
    judgeSwitch();

    return 0;
}
