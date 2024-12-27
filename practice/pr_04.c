#include <stdio.h>
#include <math.h>
int main()
{
    int ones, tens, hun;
    int number;
    int arm;
    printf("Enter any Three Digit Number Digit by Digit\n");
    printf("Enter the hundreds value of number:");
    scanf("%d", &hun);
    printf("\nEnter the tens value of number:");
    scanf("%d", &tens);
    printf("\nEnter the digit value of number:");
    scanf("%d", &ones);
    number = (100 * hun + 10 * tens + ones);
    arm = pow(hun, 3) + pow(tens, 3) + pow(ones, 3);
    if (number == arm)
    {
        printf("\nNumber is Armstrong number");
    }
    else
    {
        printf("\nNumber is Not Armstrong number");
    }

    return 0;
}