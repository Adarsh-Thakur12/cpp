#include<stdio.h>
int main()
{
    int n; 
    int i=0;
    printf("Enter the Value of A ");
    scanf("%d",&n);
    do
    {
        printf("Value of a %d\n",i+1);
        i++;
    } while (i<n);
    return 0;
    
}