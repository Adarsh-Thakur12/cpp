#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while( j>=0 && arr[j]>current )
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Adarsh Singh Sengar"<<endl;
    cout<<"CSDS"<<endl;
    cout<<"2-A"<<endl;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Insertion_sort(arr,n);
    print(arr,n);
}