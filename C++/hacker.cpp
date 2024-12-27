#include<stdio.h>

void plusMinus(int arr_count, int* arr) {
int n;
scanf("%d",&n);
int*a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",a[i]);
}
int cp=0;
int cn=0;
int zr=0;
for(int j=0;j<n;j++)
{
    if(a[j]<0)
    {
        cn++;
    }
    else if(a[j]>0)
    {
        cp++;
    }
    else if(a[j]==0)
    {
        zr++;
    }
}
 float pos,neg,zrr;
 pos=cp/n;
 neg=cn/n;
 zrr=zr/n;
 

printf("%f\n",pos);
printf("%f\n",neg);
printf("%f\n",zrr);

}