#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of Array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2;
    int pd, cr;
    int count = 2;
    pd = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {

        cr = arr[i] - arr[i - 1];
        if (pd == cr)
        {
            count++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            count = 2;
        }
        ans = max(ans, count);
    }
    cout << "Longest Sub Array:" << ans;
    return 0;
}