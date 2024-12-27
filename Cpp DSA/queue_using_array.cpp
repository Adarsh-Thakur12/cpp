#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int capacity;
    int currsize;
    int f, r;

public:
    queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currsize = 0;
        f = 0;
        r = -1;
    }
    void push(int data)
    {
        if (currsize == capacity)
        {
            cout << "Queue is Full\n";
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = data;
        capacity++;
    }
    void pop()
    {
        f = (f + 1) % capacity;
        capacity--;
    }
    int front()
    {
        return arr[f];
    }
    bool empty()
    {
        return currsize == 0;
    }
};
int main()
{
    queue arr(4);
    arr.push(4);
    arr.push(3);
    arr.push(2);
    arr.push(1);
    cout << arr.front();
    arr.pop();
    cout << arr.front();
    arr.pop();
    arr.pop();
    arr.pop();
    arr.pop();
    arr.pop();
    cout << arr.front();

    return 0;
}