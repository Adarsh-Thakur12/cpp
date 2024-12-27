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
    void insert(int val, int pos) // Insertion in any particular index
    {
        node *newnode = new node(val);
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is Invalid";
                return;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
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
        // 1 way if last index is known
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        // 2nd way if last element is not known
        //  while(temp->next->next != NULL)
        //  {
        //      temp=temp->next;
        //  }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    int search_element(int key)
    {
        int pos = 0;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {

                // cout << "Element found at index " << pos;
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        // cout << "Element Not Found";
        return -1;
    }
};
int main()
{
    list l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.insert(100, 2);
    l1.printll();
    cout << l1.search_element(20);
}
