#include <iostream>
#include <string>
using namespace std;
void partition(string s1, string ans)
{
    if (s1.size() == 0)
    {
        cout << ans << "\n";
        return;
    }
    char ch = s1[0];
    partition(s1.substr(1, s1.size() - 1), ans + ch);
    partition(s1.substr(1, s1.size() - 1), ans);
}
int main()
{
    string s1 = "abc";
    string s2 = "";
    partition(s1, s2);
}