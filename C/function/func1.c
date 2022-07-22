#include <stdio.h>

/* declare functions */
int min(int num1, int num2);

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    int result = min(a, b);

    printf("min value is : %d\n", result);

    return 0;
}

int min(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num2;
    else
        result = num1;

    return result;
}
