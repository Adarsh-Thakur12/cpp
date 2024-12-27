#include <iostream>
#include <vector>
using namespace std;
void Merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}

void Mergesort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    Mergesort(arr, 0, mid);
    Mergesort(arr, mid + 1, ei);
    Merge(arr, si, mid, ei);
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter Size of Array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Mergesort(arr, 0, n - 1);
    printarr(arr, n);

    return 0;
}