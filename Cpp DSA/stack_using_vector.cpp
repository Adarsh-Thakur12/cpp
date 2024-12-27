// Implementation of Stack Using Vector
#include <iostream>
#include <vector>
using namespace std;
class stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return;
        }
        vec.pop_back();
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    stack s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}