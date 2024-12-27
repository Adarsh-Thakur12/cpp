//Storing string in the set
//find key and the location of the key
//
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(4);
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(4);
    if(s.find(5)!=s.end())
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
    cout<<endl;
    for(int i:s)
    {
        cout<<i<<" ";
    }
    return 0;
}