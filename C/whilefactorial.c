#include <stdio.h>
int main()
{
    int a=1 ;
    int b;
    int factorial=1 ;
    printf("Enter any Number =");
    scanf("%d",&b);
    while (a<=b)
    {
        factorial *= a;
        a++;
    }
    printf("Factorial of %d is %d",b,factorial);
    return 0;
}