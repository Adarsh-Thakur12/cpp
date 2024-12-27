#include<stdio.h>
int fib(int n)
{
    if(n==1)
    {
    return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
    return fib(n-1)+fib(n-2);

    }
}
int main()
{
int num; 
printf("Enter the NUmber");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    printf("%d ",fib(i));
}
return 0;
}