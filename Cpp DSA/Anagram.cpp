#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="anagram";
    string str2="nagaram";
    if(str1.length()==str2.length())
    {
    int flag=0;
    for(char ch : str1)
    {
        int count=str2.find(ch);
        if(count>=0)
        {
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Anagram Series"<<endl;
    }
    else{
        cout<<"Not Anagram";
    }
    }
    else
    {
        cout<<"Not Anagram";
    }
}