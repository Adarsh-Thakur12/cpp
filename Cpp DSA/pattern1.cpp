#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int p=n;
    for(int i=1;i<=n;i++ )
    {
        for(int j=p;j>=1;j--)
        {
        cout<<"*";
        }
        cout<<endl;
        p--;
        
        
    }
   return 0;
}