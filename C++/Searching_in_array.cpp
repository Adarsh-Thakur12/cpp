#include <iostream>
using namespace std;
int main()
{
    int num, i;
    int key;
    cout << "Enter Size of Array:";
    cin >> num;
    cout << "Enter Key Elememt:";
    cin >> key;
    int arr[num];
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        if (key == arr[i])
        {
            cout << "Array index is:" << i;
            break;
        }
        else if (i == num - 1)
        {
            cout << "Key Element not Found";
        }
    }

    return 0;
}