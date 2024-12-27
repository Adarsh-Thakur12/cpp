#include<iostream>
using namespace std;
int main()
{
    int num ,j=1;
    cin>>num;
    while(j<=num)
    {
    for(int i=1;i<=10;i++)
    {
        cout<<i*j<<"\t";
    }
    j++;
    cout<<"\n";
    }
}