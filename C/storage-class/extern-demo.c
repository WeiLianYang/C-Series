/*
1. The extern storage class is used to provide a reference to a global variable that is visible to all program files. Extern when you use extern, for variables that cannot be initialized, the variable name points to a previously defined storage location.

2. When you have multiple files and define a global variable or function that can be used in other files, you can use extern in other files to get a reference to the defined variable or function. Extern is used to declare a global variable or function in a separate file.

3. The extern modifier is usually used when two or more files share the same global variable or function
 */

#include <stdio.h>

int externVar;

extern void readExtern();

// gcc extern-demo.c func.c

int main(int argc, char const *argv[])
{
    externVar = 1;
    readExtern();

    return 0;
}
