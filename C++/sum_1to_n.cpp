#include<iostream>
using namespace std;
int main()
{
    int i=0, n,sum;
    sum=0;
    cin>>n;
    // for(i=0;i<=n;i++)        //From FOR loop
    // sum+=i;
    while(i<=n)                 //From WHILE loop
    {
        sum+=i;
        i++;
    }
    cout<<"sum= "<<sum;
    return 0;
}