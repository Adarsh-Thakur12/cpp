#include<iostream>
using namespace std;
void cs(int arr[],int n)
{
    int maxi=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    int freq[maxi]={0};
    int maxval=INT16_MIN, minval=INT16_MAX;
    for(int i=0;i<maxi;i++)
    {
        freq[arr[i]]++;
        int maxval=max(maxval,arr[i]);
        int minval=min(minval,arr[i]);
    }
    for(int i=minval,j=0;i<=maxval;i++)
    {
        while(freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }
   
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of Array";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cs(arr,n);
    printarr(arr,n);

}