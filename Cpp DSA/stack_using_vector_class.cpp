#include <iostream>
#include <vector>
#include<string>
using namespace std;
template <class T>
class stack
{
    vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }
    T top()
    {
        int topidx = vec.size() - 1;

        return vec[topidx];
    }
    bool isempty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    stack<string> s;
    s.push("adarsh");
    s.push("Singh");
    s.push("Sengar");
    while (!s.isempty())
    {
        cout << s.top()<<" ";
        s.pop();
    }
}