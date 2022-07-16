#include <stdio.h>

/*

 1. Left value: An expression that refers to a memory location is called an left value expression.
 An lvalue can appear to the left or right of an assignment.

 2. Right value: The term right value refers to a value stored in memory at some address. 
 An right value is an expression that cannot be assigned to, 
 that is, an right value can appear to the right of an assignment, but not to the left.
 
*/

// define variables outside the function
int a;
int b;

int add()
{
    // declare variables as external variables
    extern int a;
    extern int b;

    // assign values to external variables (global variables)
    a = 1;
    b = 2;

    return a + b;
}

int main(int argc, char const *argv[])
{
    int result = add();

    printf("invoke function add : %d", result);

    return 0;
}
