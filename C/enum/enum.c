#include <stdio.h>

enum GENDER
{
    male,
    female
};

enum SEASON
{
    spring = 1,
    summer,
    autumn,
    winter
};

int main(int argc, char const *argv[])
{
    enum GENDER gender1 = male;
    enum GENDER gender2 = female;

    printf("gender1: %d\n", gender1); // 0
    printf("gender2: %d\n", gender2); // 1

    enum SEASON season = summer;

    printf("season: %d\n", season); // 2

    printf("season: ");

    for (enum SEASON season = spring; season <= winter; season++)
    {
        printf("%d, ", season); // season: 1, 2, 3, 4, 
    }

    return 0;
}
