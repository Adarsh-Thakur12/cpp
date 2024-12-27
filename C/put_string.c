#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter your name:");
    scanf("%c", str);
    printf("Enter your name:");
    scanf("%s", str);
    printf("Entered Name %c", str);
    printf("Entered Name %s", str);
}