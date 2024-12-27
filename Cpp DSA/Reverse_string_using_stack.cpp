#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str="adarsh";
    stack<string>rev;
    for(int i=0;i<str.length();i++)
    {
        rev.push(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<rev.pop()<<" ";
    }
    return 0;
}