// #include<stdio.h>
// int main()
// {
//     int a;
//     char chartype;
//     float floattype;
//     printf("THe size of A is %d\n",sizeof(a));

//     printf("THe size of A is %d\n",sizeof(chartype));

//     printf("THe size of A is %d\n",sizeof(floattype));
//     return 0;
// }
#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
    swap=a;
    a=b;
    b=swap;
    printf("Swaped Value of a is %d\n",a);
    printf("Swaped Value of b is %d\n",b); 
    return 0;

}