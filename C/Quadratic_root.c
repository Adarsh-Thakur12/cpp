#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2,i1,i2;
    printf("Enter COfficient of x^2: ");
    scanf("%d",&a);
    printf("Enter Cofficient of x: ");
    scanf("%d",&b);
    printf("ENter the Constant term: ");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Equation has two real roots\n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("Roots are : %.1f , %.1f",r1,r2);
    }
    else if(d==0)
    {
        printf("Equation has only one root\n");
        r1=-b/4*a;
        printf("Root is : %.2f",r1);
    }
    else 
    {
        printf("Equation has imaginary roots\n");
        r1=-b/2*a;
        i1=sqrt(-b*b+4*a*c)/2*a;
      
        printf("Roots are %.2f+%.2fi , %.2f-%.2fi",r1,i1,r1,i1);
        
    }
    return 0;

}