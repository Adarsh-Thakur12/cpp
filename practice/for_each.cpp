#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="ada";
   // getline(cin,str);
    for(char ch : str)
    {
        cout<<ch<<" ";
    }
        cout<<endl;
    cout<<str.find('q');

    return 0;
}