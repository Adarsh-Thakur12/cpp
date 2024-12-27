#include <stdio.h>
int main()
{
    int factorial , number;
    printf("Enter the Number you want factorial of: ");
    scanf("%d", &number);
    while (number <= 1)
    {
        factorial *= number;
        number=number-1;
    }
    printf("The facatorial of given Number is %d", factorial);
    return 0;
}