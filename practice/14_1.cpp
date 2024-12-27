#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="sdafjk";
    int count=0;
    for(char ch: str1)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        count++;
    }
    cout<<count;
}