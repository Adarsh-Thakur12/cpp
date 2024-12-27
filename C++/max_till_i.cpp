#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array:";
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        cout << max << "  ";
    }
    return 0;
}