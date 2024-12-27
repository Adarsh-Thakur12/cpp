#include<stdio.h>
float avg(int a,int b,int c);
int main()
{
 int a,b,c;
 printf("Enter First Number:");
 scanf("%d",&a);
 printf("Enter Second Number:");
 scanf("%d",&b);
 printf("Enter Third Number:");
 scanf("%d",&c);
 printf("Average of %d & %d & %d is=%f",a,b,c,avg(a,b,c));
return 0;
}
float avg(int a,int b,int c)
{

    float result;
    result=(float)(a+b+c)/3;
    return result;
}