#include <stdio.h>
typedef struct cnum
{
    float real;
    float img;
} comp;
void display(comp c)
{
    printf("Real part of Complex Number is %f\n",c.real);
    printf("Imaginary part of Complex Number is %f\n",c.img);
}
int main()
{
    comp num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part of %d Complex Number ", i + 1);
        scanf("%f", &num[i].real);
        printf("Enter imaginary part of %d Complex Number ", i + 1);
        scanf("%f", &num[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(num[i]);
    }
}