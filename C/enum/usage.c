#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    enum COLOR
    {
        red = 1,
        orange,
        blue
    };

    enum COLOR c = blue;

    switch (c)
    {
    case red:
        printf("red\n");
        break;
    case orange:
        printf("orange\n");
        break;
    case blue:
        printf("blue\n");
        break;
    default:
        printf("none\n");
    }

    enum SEASON
    {
        spring,
        summer,
        autumn,
        winter
    } season;

    int var = 1;
    enum SEASON s = (enum SEASON)var; // type cast
    printf("s: %d", s);               // 1

    return 0;
}
