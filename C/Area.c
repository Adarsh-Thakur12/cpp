#include <stdio.h>
int main()
{
  int a;
  int l;
  printf("Length of Rectangle:");
  scanf("%d",&l);
  int b;
  printf("Breadth of Rectangle:");
  scanf("%d",&b);
  a = l * b;
  printf("Area of Rectangle=%d",a);
  return 0;
}