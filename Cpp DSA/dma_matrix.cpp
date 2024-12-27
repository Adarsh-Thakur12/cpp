#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,flag=0;
    cout<<"enter string1"<<endl;
    getline(cin, str);
    string word="abcdefghijklmnopqrstuvwxyz";
   
    for(i=0;i<word.length();i++)
    {
    if(str.find(word[i])!=-1)
    flag++;
    }
    if(flag>=26)
    cout<<"pangram";
    else
    cout<<"not pangram";
    return 0;
}