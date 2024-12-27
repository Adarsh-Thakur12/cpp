#include <iostream>
#include <vector>
#include <string>
using namespace std;
void divide(vector<string>& arr, int si, int mid, int ei)
{
    int i = si;
    int j = mid + 1;
    vector<string> temp;
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
void dividesort(vector<string>& arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    dividesort(arr, si, mid);
    dividesort(arr, mid + 1, ei);
    divide(arr, si, mid, ei);
}
void printarr(vector<string>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<string> arr;
    arr = {"sun", "earth", "mars", "mercury"};
    int n = 4;
    dividesort(arr, 0, n - 1);
    printarr(arr, n);
}