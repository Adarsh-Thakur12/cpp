#include <stdio.h>
int main()
{
    char str[] = {'a','d','a','r','s','h'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}