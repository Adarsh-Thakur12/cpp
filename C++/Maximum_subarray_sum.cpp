#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of ARRAY:";
    cin >> n;
    int arr[n];
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int br = 0;
        for (int j = i; j < n; j++)
        {
            br += arr[j]; 
            if (sum < br)
            {
                sum = br;
            }
        }
    }
    cout << sum;
    return 0;
}