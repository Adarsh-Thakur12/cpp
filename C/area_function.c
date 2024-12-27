#include <stdio.h>
void area();
int main()
{
    int par;
    area();
    return 0;
}
void area()
{
    int a, par;
    printf("Enter the Side of Square:");
    scanf("%d", &a);
    par = a * a;
    printf("Area of Square is %d", par);


}


