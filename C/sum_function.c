#include <stdio.h>
int sum(int b,int x);
int main()
{
    int x ;int b;

    for (x = 0; x <= 10; x++)
    {
         sum(b);
    }
    printf("%d",x);
    return 0;
}
int sum(int b,int x)
{
    
    b += x;
    return b;
}