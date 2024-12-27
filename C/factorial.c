#include <stdio.h>
int main()
{
    int a=1, n, factorial=1;
    printf("Enter any Number = ");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {
        factorial *= a;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}