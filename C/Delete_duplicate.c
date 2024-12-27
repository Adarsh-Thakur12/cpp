#include<stdio.h>
int main()
{
    int num,n=0;
    printf("Enter num: ");
    scanf("%d",&num);
    int a[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=1;j<num;)
        {
           if(a[i] == a[j]) {
                for(int k = j; k < num - 1; k++) {
                    a[k] = a[k + 1];
                }
                num--; // Decrement num to reflect the removal of duplicate
            } else {
                j++; // Move to the next element
            }
        }
    }
  
    for(int i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}