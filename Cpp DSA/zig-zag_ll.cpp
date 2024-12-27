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
node *splitatmid(node *head)
{
    node *fast = head;
    node *slow = head;
    node *mid = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        mid = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (mid != NULL)
    {
        mid->next = NULL;
    }
    return slow;
}
node *zig_zag(node *head)
{
    list ans;
    node *righthead = splitatmid(head);
    node *rightheadrev = reverse_ll(righthead);
    while (head != NULL && head->next != NULL)
    {
        ans.push_back(head->data);
        head = head->next;
        ans.push_back(rightheadrev->data);
        rightheadrev = rightheadrev->next;
    }
    return ans.head;
}
int main()
{
    list l1;
    l1.push_front(6);
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    node *ansh = zig_zag(l1.head);
    printll(ansh);
}