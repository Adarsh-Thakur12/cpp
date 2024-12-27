#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
    ~node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    ~list()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        node *newnode = new node(val);
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
        node *newnode = new node(val);
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
    void print_ll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void reverse_ll()
    {
        node *current = head;
        node *prev = NULL;
        while (current != NULL)
        {
            node *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    int size()
    {
        int sz=0;
        node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void delete_index(int index)
    {
        node *ptr = head;
        int sz=size();
        for (int i = 1; i < (sz - index); i++)
        {
            ptr = ptr->next;
        }
        node *to_delete=ptr->next;
        cout<<"The Value you want to erase is"<<to_delete->data<<endl;

        ptr->next = ptr->next->next;
    }
};
int main()
{
    list l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    // l1.print_ll();
    // l1.reverse_ll();
    l1.print_ll();
    l1.delete_index(3);
    l1.print_ll();
}