#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList
{
public:
    Node *head;
    Node *tail;
    DoublyList()
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
            head->prev = newnode;
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
            newnode->prev = tail;
            newnode = tail;
        }
    }
    void pop_front()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is Empty";
        }
        else
        {
            head->prev=NULL;
            head = head->next;
            delete temp;
        }
    }
    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        tail = temp;
        tail->next=NULL;
        temp = temp->next;
        delete temp;
    }
    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "End" << endl;
    }
};
int main()
{
    DoublyList l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(5);
    l1.pop_back();
    l1.pop_front();
    l1.printll();
    return 0;
}