#include<iostream>
using namespace std;
int main()
{
    int size,temp;
    cout<<"Enter Size of Array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}


