#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class queue
{
    node *head;
    node *tail;

public:
    queue()
    {
        head = NULL;
        tail = NULL;
    }
    void push(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete (temp);
        }
    }
    int front()
    {
        if (head == NULL)
        {
            return 0;
        }
        else
        {
            node *temp = head;
            return temp->data;
        }
    }
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    bool isempty()
    {
        return head==NULL;
    }
};
int main()
{
    queue q1;
    q1.push(5);
    q1.push(4);
    q1.pop();
    q1.push(3);
    q1.pop();
    q1.push(2);
    q1.push(1);
    int n = q1.front();
    cout << n;
    cout << endl;
    q1.printll();
}