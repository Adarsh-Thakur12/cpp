#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter the First Number:");
    scanf("%d", &num1);
    printf("Enter the Second Number:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("Number 1 is greater number by %d", (num1 - num2));
    }
    else
    {
        printf("Number 2 is greater number by %d", (num2 - num1));
    }
    return 0;
}