#include<iostream>
using namespace std;
int tile(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    int ans1=tile(n-1);
    int ans2=tile(n-2);
    return ans1+ans2;
}
int main()
{
    int n;
    cout<<"Enter the n:";
    cin>>n;
    cout<<tile(n);
}