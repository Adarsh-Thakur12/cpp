#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of %d student :", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of %d student :%d\n", i + 1, a[i]);
    }

    return 0;
}