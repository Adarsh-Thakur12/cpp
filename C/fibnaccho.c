#include <stdio.h>
int series(int num);
int main()
{
    int num, b;
    printf("Enter any Number : ");
    scanf("%d",&num);
    for(b=0;b<num;b++)
    {
        printf("%d,",series(b));
    }
    return 0;
}
int series(int num)
{
    
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return series(num - 1) + series(num-2);
    }
}