#include <stdio.h>
 

void inout1() {
    int in;

    printf("Enter a value: ");
    // Read the next available character from the screen
    in = getchar();

    printf("\nYou entered: ");
    // Output the character to the screen and return the same character
    putchar(in);
    printf("\n");
}

void inout2() {
    char str[50];

    printf("Enter a value: ");
    gets(str);

    printf("\nYou entered: ");
    puts(str);
}

void inout3() {
    char str[50];
    int in;

    printf("Enter a value: ");
    scanf("%s %d", str, &in);

    printf("\nYou entered: %s %d ", str, in);
    printf("\n");
}

int main( )
{
    // inout1();

    // inout2();

    inout3();

    return 0;
}

