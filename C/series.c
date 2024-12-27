#include<stdio.h>
int main()
{
    int num;
    double sum=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum+=(1/i);

    }
    printf("Sum of Series is %f",sum);
    return 0;
}