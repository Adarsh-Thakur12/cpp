#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;
    int i;
    scanf("%d",num);
    int arr[]={num};
    for(int j=0;j<=*num;j++)
    {
        scanf("%d ",arr[j]);
    }
    for(i=*num;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }    
    
}
