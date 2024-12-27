#include <stdio.h>
int main()
{
    float length, breadth;
    printf("Enter the Length of the Rectangl=");
    scanf("%f", &length);
    printf("Enter the Breadth of the Rectangle=");
    scanf("%f", &breadth);
    float perimeter = 2*(length + breadth);
    printf("Perimeter of Rectangle is=%f", perimeter);
    return 0;
}