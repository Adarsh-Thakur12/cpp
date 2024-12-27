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
    ~node() // Node Destructor
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
    ~list() // List Destructor
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val) // Insert element in the beginning
    {
        node *newnode = new node(val); // dynamically allocation of new node
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
    void push_back(int val) // Insert element from the last
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
    void printll() // Printing link list
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
   
    void pop_front() // To delete Element from the Starting index
    {
        if (head == NULL)
        {
            cout << "Link list is Empty" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop__back() // to delete element from the last
    {
        node *temp = head;
     
         while(temp->next->next != NULL)
         {
             temp=temp->next;
         }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    
};
int main()
{
   
}
