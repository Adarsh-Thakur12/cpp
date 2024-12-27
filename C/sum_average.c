#include<stdio.h>
int main()
{
    int a=0,b,c;
    printf("Enter the Number till you want sum:");
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    {
        a+=i;
    }
    b=(a/c);
    printf("Sum of Numbers=%d %d",a ,b);
    return 0;
}