#include<stdio.h>
int main()
{
    int num1[]={1,2,3,3,4};
    int n1=sizeof(num1)/sizeof(int);
    int num2[]={2,3,4};
    int n2=sizeof(num2)/sizeof(int);
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(num1[i]==num2[j])
            {
                count++;
            }
        }
    }
    int arr[count];
    for(int i=0,k=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(num1[i]==num2[j])
            {
                arr[k]=num1[i];
                k++;
            }
        }
    }
    int temp;
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        if(arr[i]==arr[i+1])
        {
            arr[i+1]=arr[i]
        }
    }

    for(int i=0;i<count;i++)
    {
        printf("%d\t",arr[i]);
    }

}