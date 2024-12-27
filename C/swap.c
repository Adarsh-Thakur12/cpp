#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a = 4;
    int b = 48;
    printf("Value of a and b before Swap is %d %d \n" , a , b);
    swap(&a,&b);
    printf("Value of a and b before Swap is %d %d " , a , b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}