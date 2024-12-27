#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("Enter the NUmber");
    scanf("%d",&n);
    x:
      fact *=i;
      i++;
      if(i<=n) goto x;
      printf(" Factorial of Given NUmber is %d",fact);
      return 0;
      
}