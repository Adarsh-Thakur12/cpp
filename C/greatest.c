#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter First NUmber ");
    scanf("%d", &a);
    printf("Enter Second NUmber ");
    scanf("%d", &b);
    printf("Enter Third NUmber ");
    scanf("%d", &c);
    printf("Enter Fourth NUmber ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the Greatest Number", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the Greatest Number", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the Greatest Number", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("%d is the Greatest Number", d);
    }
    else if(a=b=c=d)
    {
        printf("All Numbers are Same");
    }
    return 0;
}