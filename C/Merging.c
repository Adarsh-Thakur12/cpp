#include<stdio.h>
int main()
{
    int num1,num2,j=0;
    printf("Enter Size of Array1: ");
    scanf("%d",&num1);
    int a1[num1];
    printf("Enter Elements of Array1\n");
    for(int i=0;i<num1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter Size of Array2: ");
    scanf("%d",&num2);
    int a2[num2];
    printf("Enter Elements of Array2\n");
    for(int i=0;i<num2;i++)
    {
        scanf("%d",&a2[i]);
    }
    int a3[num1+num2];
    for(int i=0;i<(num1+num2);i++)
    {
        if(i<num1)
        {
            a3[i]=a1[i];
        }
        else
        {
            a3[i]=a2[j];
            j++;
        }
        
    }
    for(int i=0;i<num1+num2;i++)
    {
        printf("%d ",a3[i]);
    }
    return 0;
    
    
}