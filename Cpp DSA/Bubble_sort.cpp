#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of Array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl
         << "Number of swap performed: " << count;
    return 0;
}