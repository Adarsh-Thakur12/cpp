#include <iostream>
#include <vector>
using namespace std;
int partition(int arr[], int si, int ei)
{
    int i = si-1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}
void quicksort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int pivotIdx = partition(arr, si, ei);
    quicksort(arr, si, pivotIdx - 1); // left Half
    quicksort(arr, pivotIdx + 1, ei); // right Half
}
int printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of Array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    printarr(arr, n);
}