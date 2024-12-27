#include<iostream>
using namespace std;
void profit(int *a,int n)
{
    int buy[20];
   
    int profit[20];
    int maximum=INT_FAST8_MIN;


    for(int i=1;i<n;i++)
    {
       buy[0]=INT_FAST8_MAX;
       buy[i]=min(buy[i-1],a[i-1]);
       cout<<buy[i]<<" ";
         
    }
   
    for(int i=0;i<n;i++)
    {
        profit[i]=a[i]-buy[i];
        maximum=max(profit[i],maximum);
        cout<<profit[i]<<" ";
        cout<<endl;
        cout<<endl;
    }
    cout<<"Maximum Profit="<<maximum;

}
int main()
{
    int price[]={7,1,5,3,6,4};
    int n=sizeof(price)/sizeof(int );a
    profit(price,n);
    return 0;
}