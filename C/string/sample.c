#include <stdio.h>
#include <string.h>

/* 
strcpy(str3, str1): abc
strcat(str1, str2): abcxyz
strlen(str1): 6
strcmp(str1, str2): -23
first position of x: 0x7ff7bf1be048
first position of xy: 0x7ff7bf1be040
 */
int main(int argc, char const *argv[])
{
    char str1[9] = "abc";
    char str2[9] = "xyz";
    char str3[9];
    int len;

    /* copy str1 to str3 */
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);

    /* concat str1 and str2 */
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);

    /* length of str1 */
    len = strlen(str1);
    printf("strlen(str1): %d\n", len);

    /* compare str1 and str2 */
    int flag = strcmp(str1, str2);
    printf("strcmp(str1, str2): %d\n", flag);

    // Returns a pointer to the first occurrence of char x in string str1.
    char *p1 = strchr(str1, 'x');
    printf("first position of x: %p\n", &p1);

    // Returns a pointer to the first occurrence of string xy in string str1.
    char *p2 = strchr(str1, 'xy');
    printf("first position of xy: %p\n", &p2);

    return 0;
}
