#include <iostream>
using namespace std;
class A
{
    string st = "Secret";
    friend class B;
};
class B
{
public:
    void show(A &obj)
    {
        cout << obj.st;
    }
};
int main()
{
    A a1;
    B b1;
    b1.show(a1);
}