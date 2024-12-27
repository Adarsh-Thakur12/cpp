#include <stdio.h>
int main()
{
int a = 32;
int *j = &a;
printf("The value of a is %d\n", a);
printf("The value of a is %d\n", *j);
printf("The address of a is %u\n", &a);
printf("The address of j is %d\n", &j);
return 0;
}