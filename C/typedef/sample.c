#include <stdio.h>
#include <string.h>
 
struct Users
{
    char name[20];
    int age;
};

/* 
name : William
age : 18
 */
int main( )
{
    typedef struct Users USERS;

    USERS user;

    strcpy(user.name, "William");
    user.age = 18;

    printf("name : %s\n", user.name);
    printf("age : %d\n", user.age);

    return 0;
}