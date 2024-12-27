#include <stdio.h>
struct number
{
    float real;
    float imaginary;
};
struct number numsum(struct number num1, struct number num2)
{
    struct number result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}
int main()
{
    struct number num1, num2, sum;
    printf("Enter the Real part of complex number:");
    scanf("%f", &num1.real);
    printf("\nEnter the Imaginary part of complex number:");
    scanf("%f", &num1.imaginary);
    printf("\nComplex Number is %f%f", num1.real, num1.imaginary);
    printf("\nEnter the Real part of complex number:");
    scanf("%f", &num2.real);
    printf("\nEnter the Imaginary part of complex number:");
    scanf("%f", &num2.imaginary);
    printf("\nComplex Number is %f%f", num2.real, num2.imaginary);

    sum = numsum(num1, num2);
        printf("Sum of real part of Complex Number is %f", sum.real);
    printf("\nSum of imaginary part of Complex Number is %f", sum.imaginary);

    return 0;
}