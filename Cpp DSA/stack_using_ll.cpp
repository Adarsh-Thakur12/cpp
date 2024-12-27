#include <iostream>
#include <list>
using namespace std;
template <class T>
class stack
{
    list<T> l1;

public:
    void push(T val)
    {
        l1.push_front(val);
    }
    void pop()
    {
        l1.pop_front();
    }
    T top()
    {
        return l1.front();
    }
    bool isempty()
    {
        return l1.size() == 0;
    }
};
int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    while (!s1.isempty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    return 0;
}