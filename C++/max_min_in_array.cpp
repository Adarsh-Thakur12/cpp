#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter Size of Array:";
    cin >> num;
    int arr[num];
    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        MaxNo = max(MaxNo, arr[i]);
        MinNo = min(MinNo, arr[i]);
    }
    cout << "Max Term: " << MaxNo << " "
         << "Min Term: " << MinNo;
    return 0;
}