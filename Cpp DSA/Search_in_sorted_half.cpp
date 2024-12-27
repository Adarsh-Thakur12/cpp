#include <iostream>
#include <vector>
using namespace std;
int search(int arr[], int si, int ei, int target)
{
    if(si>ei)
    {
        return -1;
    }
    int mid = si + (ei - si) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[si] <= target)
    {
        if (arr[si] <= target && target <= arr[mid-1])
        {
            return search(arr, si, mid - 1, target);
        }
        else
        {
            return search(arr, mid + 1, ei, target);
        }
    }
    else
    {
        if (arr[mid+1] <= target && target <= arr[ei])
        {
            return search(arr, mid + 1, ei, target);
        }
        else
        {
            return search(arr, si, mid - 1, target);
        }
    }
}
int main()
{
    int n, target;
    cout << "Enter size of Array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Enter the target value:";
    cin >> target;
    cout << "Index: " << search(arr, 0, n - 1, target);
    return 0;
}