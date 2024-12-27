#include <iostream>
#include <string>
using namespace std;
void print_substr(string s1, string s2)
{
    int n = s1.size();
    if (s1.size() == 0)
    {
        cout<<s2<<endl;
        return;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        char ch = s1[i];
        string New_strin=s1.substr(0,i)+s1.substr(i+1,n-i-1);
        print_substr(New_strin, s2+ch);
    }
}
int main()
{
    string s1 = "abc";
    string s2 = "";
    print_substr(s1, s2);
    return 0;
}