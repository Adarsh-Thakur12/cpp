#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, r1, r2, real, imag;
    printf("Enter value of A:\n");
    scanf("%f", &a);
    printf("Enter value of B:\n");
    scanf("%f", &b);
    printf("Enter value of C:\n");
    scanf("%f", &c);
    D = ((b * b) - 4 * a * c);
    if (D >= 0)
    {
        if (D > 0)
        {
            printf("Roots are Real and Distinct");
            r1 = (-b + sqrt(D)) / (2 * a);
            r2 = (-b - sqrt(D)) / (2 * a);
            printf("\nRoot1= %f , Root2=%f", r1, r2);
        }
        else
        {
            printf("Roots are Equal");
            r1 = r2 = (-b / (2 * a));
            printf("\nRoot1= %f , Root2=%f", r1, r2);
        }
    }
    else
    {
        printf("Roots are Imaginary");
        real = (-b / (2 * a));
        imag = (sqrt(-D) / (2 * a));
        printf("\nRoot1= %.2f + %.2f i", real, imag);
        printf("\nRoot2= %.2f - %.2f i", real, imag);
    }

    return 0;
}