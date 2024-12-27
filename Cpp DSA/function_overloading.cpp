#include<iostream>
#include<string.h>
using namespace std;
class Print{
    public:
    void show(int x)
    {
        cout<<"int is:"<<x<<endl;
    }
    void show(string x)
    {
        cout<<"string is:"<<x<<endl;
    }
};

int main()
{
    Print p1;
    p1.show(23);
    p1.show("Adarsh");
    return 0;

}