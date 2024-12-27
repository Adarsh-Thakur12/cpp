#include <iostream>
#include <string>
using namespace std;
void rev(string ques, string ans, bool map[], int i)
{
    if(i==ques.size())
    {
        cout<<ans<<" ";
        return ;
    }
    char ch = ques[i];
    int mapid = (int)ch - 'a';
    if (map[mapid])
    {
         rev(ques, ans, map, i+1);
    }
    else
    {
        map[mapid]={true};
        rev(ques, ans+ques[i], map, i+1);

    }
}
int main()
{
    string ques = "aaddaarrsshh";
    string ans = "";
    bool map[26] = {false};
    int i = 0;
    rev(ques, ans, map, i);
}