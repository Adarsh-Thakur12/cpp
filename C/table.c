#include <stdio.h>
int main()
{
    int a;
    int n;
    printf("Enter the number-");
    scanf("%d", &n);
    for (a = 10; a >= 1; a--)
    {

        printf(" %d\n", a * n);
    }
    return 0;
}