// 1st problem
/*#include <stdio.h>
int main()
{
    int a = 45;
    int *b = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %u\n", &(*b));
    printf("The value of a is %d\n" ,&b);
    return 0;
}

// 2nd problem
#include <stdio.h>
void address(int a);

int main()
{
    int i = 4;int a;
    printf("Address of a is %u\n ", &a);
    printf("Value of i is %d\n ", *(&i));
    printf("Address of i is %u\n ", &i);
    address(i);
    return 0;
}
void address(int a)
{
    int *i = &a;
    printf("Address of i is %u", &(*i));
    return;
}


// 3rd problem
#include <stdio.h>
int value(int a);
int main()
{
    int i = 4;
    printf("The value of I is %d\n", i);
    printf("After Function\n");
    printf("The Value of I is %d", value(i));
    return 0;
}
int value(int a)
{
    int c;
        c = 10 *a;
    return c;
}


// 4th problem

#include <stdio.h>
int sum(int a, int b);
int average(int a, int b);
int main()
{
    int a;
    int b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("\nEnter the value of b:");
    scanf("%d", &b);
    printf("\nSum of two numbers =%d", sum(a, b));
    printf("\nAverage of two number =%d", average(a, b));
    return 0;
}
int sum(int a, int b)
{
    return (a + b);
}
int average(int a, int b)
{
    return ((a + b) / 2);
}
*/
//5th program

#include<stdio.h>
int main()
{
 int i=45;
 int *ptr;
 int **ptr_ptr;
ptr=&i;
ptr_ptr=&ptr;
printf("The Value of i is %d",**ptr_ptr);
return 0;

}