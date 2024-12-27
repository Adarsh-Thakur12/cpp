// Floys's cycle finding algorithm
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
public:
    node *head;
    node *tail;

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
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    bool iscyclic()
    {
        node *fast = head;
        node *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "Cycle Exist";
                return 1;
            }
        }
        cout << "Cycle doesn't Exist";
        return 0;
    }
    void remove_cycle()
    {
        node *fast = head;
        node *slow = head;
        node *previous = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }
        slow = head;
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            while (slow != fast)
            {
                slow = slow->next;
                previous = fast;
                fast = fast->next;
            }
            previous->next = NULL;
        }
    }
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    list l1;
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.tail->next = l1.head;
   l1.remove_cycle();
    l1.printll();
}