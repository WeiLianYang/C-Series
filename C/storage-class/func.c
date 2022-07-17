#include <stdio.h>

extern int externVar;

void readExtern()
{
    printf("externVar is %d", externVar);
}