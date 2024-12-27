#include <stdio.h>
int main()
{
   int a, n, b;
   printf("Enter any Number=");
   scanf("%d", &n);
   for (a = 1; a <= 10; a++)
   {
      b = n * a;
      printf("%d*%d=%d\n", n, a, b);
   }
   return 0;
}