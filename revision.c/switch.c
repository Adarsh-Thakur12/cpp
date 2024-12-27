#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Your Rating(50-100): ");
    scanf("%d",&a);
    switch (a)
    {
    case(100-90):
        printf("Excellent");
        break;
    case(90-80):
        printf("Good");
        break;   

    default:
        break;
    }
}