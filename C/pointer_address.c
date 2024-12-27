#include<stdio.h>
int main()
{
 int i=345;
 int *m=&i;
 printf("Address of i is %u\n",m);
m++;m++;m++;m++;
printf("Address of i is %u\n",m);

}