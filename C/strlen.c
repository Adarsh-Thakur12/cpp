#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter Your Name:");
        gets(str);
    int val = strlen(str);
    printf("Entered Name is:%s", str);
    printf("\nLength of String is %d", val);
}