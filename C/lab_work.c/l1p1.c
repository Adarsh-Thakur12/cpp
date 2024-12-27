#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m1,m2,m3,m4,m5;
    int sum,cp=0;
    float per;
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(0<=m1&&m1<=100&&0<=m2&&m2<=100&&0<=m3&&m3<=100&&0<=m4&&m4<=100&&0<=m5&&m5<=100)
    {sum=m1+m2+m3+m4+m5;
     per=sum/5;
     if(m1<30)
             cp++;
         if(m2<30)
             cp++;
         if(m3<30)
             cp++;
         if(m4<30)
             cp++;
         if(m5<30)
             cp++;
     if(per<33)
     {
         printf("Fail CP:%d",cp);
     }
     else
     {
         
         if(75<per&&per<100)
         {
             printf("Pass First division %.1f CP:%d ",per,cp);
         }
         else if(60<per&&per<74)
         {
             printf("Pass Second Division %.1f CP:%d",per,cp);
         }
         else if(33<per&&per<59)
         {
             printf("Pass Third Division %.1f CP:%d",per,cp);
         }
     }
        
    }
    else
    {
        printf("INVALID MARKS");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
