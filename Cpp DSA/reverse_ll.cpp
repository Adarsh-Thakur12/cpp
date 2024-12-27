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
    ~node() // node Destructor
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void printll(node *head) // Printing link list
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
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
    bool isPalindrome()
    {
        if (head == NULL) return true;
        node *prev = NULL;
        node *curr = head;
        node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        node *first = head;
        printll(head);
        cout<<endl;
        printll(prev);
        node *second = prev;
        while (second != NULL)
        {
            if (first->data == second->data)
            {
                first = first->next;
                second = second->next;
            }
            else
            {
                return false;
            }
        }
        
        return true;
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
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};

node *reverse_ll(node *head)
{
    node *next = NULL;
    node *current = head;
    node *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main()
{
    list l1;
    l1.push_back(3);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(5);
    l1.push_back(1);
    l1.push_back(3);

    int temp = l1.isPalindrome();
    cout << temp;
}