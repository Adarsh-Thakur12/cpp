#include <stdio.h>
int convert(int cal);
int main()
{
    int cal, far;
    printf("Enter the Temperature:");
    scanf("%d", &cal);
    printf("Converted temperature:%d", convert(cal));
    return 0;
}
int convert(int cal)
{
    int far;
    far = cal * 1.8 + 32;
    return far;
}