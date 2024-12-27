#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    int flag=0;
    while(num!=1)
    {
        if(num%2!=0)
        {
            flag=1;
            break;
        }
        num=num/2;
    }
    if(flag==0)
    {
        printf("It can be written in power of 2");
    }
    else
    {
        printf("It can't be written in power of 2");
    }
    return 0;
}