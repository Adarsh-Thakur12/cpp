#include<stdio.h>
int main()
{
    int start,end,flag=0;
    printf("Emter the Range");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        for(int j=2;j<i;j++)
        {
            flag=1;
            if(i%j==0)
            {
                flag=0;
                break;
            }
           
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}