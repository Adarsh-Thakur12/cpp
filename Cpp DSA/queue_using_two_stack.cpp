#include <iostream>
#include <stack>
using namespace std;
class Queue
{
public:
    stack<int> s1;
    stack<int> s2;
    void push(int data)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop()
    {
        s1.pop();
    }
    int front()
    {
        return s1.top();
    }
    bool isempty()
    {
        return s1.empty();
    }
    void print_queue()
    {
        while(!s1.empty())
        {
            cout<<s1.top()<<"->";
            s1.pop();
        }
    }
};
int main()
{
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.pop();
    q1.print_queue();
    
}