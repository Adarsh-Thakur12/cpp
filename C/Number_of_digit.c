#include<stdio.h>
int main()
{
    int num,rem,dig=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    while(num==0)
    {num=num/10;
    dig=dig+1;
     }
    printf("Total Number of digit is %d",dig);
    return 0;
}