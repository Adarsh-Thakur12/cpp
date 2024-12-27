#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        Node *newnode = new Node(val);
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
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LList is empty";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LList is empty";
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "end";
    }
};
int main()
{
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.pop_front();
    l1.pop_back();
    l1.printll();
}