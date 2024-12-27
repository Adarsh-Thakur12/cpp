#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    int maxterm=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        maxterm=max(maxterm,arr[i]);
    }
    int freq[maxterm+1]={0};
   int minval=INT16_MAX,maxval=INT16_MIN;
   for(int i=0;i<n;i++)
   {
    freq[arr[i]]++;
    minval=min(minval,arr[i]);
    maxval=max(maxval,arr[i]);
   }
   for(int i=minval,j=0;i<=maxval;i++)
   {
    while(freq[i]>0)
    {
        arr[j++]=i;
        freq[i]--;
    }
   }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}