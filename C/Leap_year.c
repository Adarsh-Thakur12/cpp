#include <stdio.h>
int main()
{
    int year;
    printf("Enter The Year :");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d Year is a Leap Year", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d Year is NOt a Leap Year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d Year is a Leap Year", year);
    }
    else
    {
        printf("%d is Not a Leap Year",year);
    }
    return 0;
}