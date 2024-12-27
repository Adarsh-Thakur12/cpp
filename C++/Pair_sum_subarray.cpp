// Check if there exists two elements in an array such that their sum is equal to given k
#include <iostream>
using namespace std;
bool sum(int arr[], int n, int k)
{
    arr[n];
    int low, high;
    low = 0;
    high = n - 1;
    while (low < high)
        if (arr[low] + arr[high] == k)
        {
            cout << arr[low] << " " << arr[high]<<endl;
            return true;
        }
        else
        {
            if (arr[low] + arr[high] > k)
            {
                high--;
            }
            else if (arr[low] + arr[high] < k)
            {
                low++;
            }
        }
    return false;
}
int main()
{
    int n, k;
    cout << "Enter the Size of Array:";
    cin >> n;
    cout << "Enter value of k:";
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = sum(arr, n, k);
    if (s == true)
    {
        cout << "Sum Exist";
    }
    else
    {
        cout << "Sum doesn't Exist";
    }
    return 0;
}