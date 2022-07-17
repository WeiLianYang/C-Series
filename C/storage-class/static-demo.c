#include <stdio.h>

/*
1. The static storage class instructs the compiler to keep a local variable alive for the life of the program,
without needing to create and destroy it every time it enters and leaves scope. Therefore, using static to modify local variables preserves the value of the local variable between function calls.

2. The static modifier can also be applied to global variables. When static modifies a global variable, it limits the scope of the variable to the file in which it was declared.

3. A globally declared static variable or method can be called by any function or method as long as the methods appear in the same file as the static variable or method.
 */

// declare function
void func();

// global variable, static is default
static int counter = 5;

int main(int argc, char const *argv[])
{
    while (counter--)
    {
        func();
    }
    return 0;
}

void func()
{
    static int insideVar = 5;
    insideVar++;

    printf("insideVar: %d, counter: %d \n", insideVar, counter);
}
