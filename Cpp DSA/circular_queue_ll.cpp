#include <iostream>
using namespace std;
class node
{
public:
    char data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
public:
    node *front;
    node *rear;
    list()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int val)
    {
        node *newnode = new node(val);
        if (front = rear = NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }
    void dequeue()
    {
        node *temp = front;
        if (temp == NULL)
        {
            cout << "Queue is empty";
            return;
        }
        else
        {
            front = front->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void printq()
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};
int main()
{
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.printq();
    q1.dequeue();
    q1.printq();
}
