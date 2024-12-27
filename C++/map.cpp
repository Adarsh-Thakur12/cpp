#include <iostream>
#include <map>
using namespace std;
int main()
{
    map< string , int> m;
    m<<.insert({"apple",10});
    m.insert({"banana",20});
    m.insert({"orange",30});
    for(auto i:m)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }
    m.erase("banana");
    for(auto i:m)
    {
        cout<<i.first<<"->">>i.second<<endl;
    }
}