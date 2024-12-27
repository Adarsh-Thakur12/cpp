#include <stdio.h>
void avg();
int main()
{
    int e;
    avg();
    return 0;
}
void avg()
{
    int a, b, c,e;

    printf("Enter First numbers:\n");
    scanf("%d", &a);
    printf("Enter Second numbers:\n");
    scanf("%d", &b);
    printf("Enter Third numbers:\n");
    scanf("%d", &c);

    e = (a + b + c) / 3;
    printf("Average of Three Numbers is %d",e);
}