#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d", &num);
    int rem[20], i=1,count=0;
    int no_of_one=0,flag=0;
    while (num != 0)
    {
        rem[i] = num % 2;
        num /= 2;
        i++;
        count++;
    }
    
    for(int i=1;i<=count;i++)
    {
        if(rem[i]==1)
        {
            no_of_one++;
        }
    }
    int result[no_of_one+1];
    for(int i=1,j=1;i<=count;i++)
    {
        if(flag==0)
        {
            result[j]=no_of_one;
            j++;
            flag++;
        }
        if(rem[i]==1)
        {
            result[j]=i;
            j++;
        }
    }
    for(int i=1;i<=no_of_one+1;i++)
    {
        printf("%d\n",result[i]);
    }
    return 0;
}