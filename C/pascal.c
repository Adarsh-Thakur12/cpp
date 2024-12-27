#include <stdio.h>
#include <math.h>
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int res=(fact(n)/(fact(r)*fact(n-r)));
    return res;
}
int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",ncr(i,j));;
        }
        printf("\n");
    }
    return 0;
}