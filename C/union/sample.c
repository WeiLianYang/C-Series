#include <stdio.h>
#include <string.h>

/* 
A union is a special data type that allows you to store different data types in the same memory location.
You can define a union with multiple members, but only one member can have a value at any time. 
union provide an efficient way to use the same memory location.
 */
union Sample
{
    int i;
    float f;
    char ch[30];
};

/* 
Memory size occupied by data : 32
sample: i: 1
sample: f: 2.500000
sample: ch: 333
 */
int main(int argc, char const *argv[])
{
    union Sample sample;

    printf("Memory size occupied by data : %lu\n", sizeof(sample));

    sample.i = 1;
    printf("sample: i: %d\n", sample.i);

    sample.f = 2.5;
    printf("sample: f: %f\n", sample.f);

    strcpy(sample.ch, "333");
    printf("sample: ch: %s\n", sample.ch);

    // printf("sample: i: %d, f: %f, ch: %s \n", sample.i, sample.f, sample.ch);

    return 0;
}
