// Sum Of Every Sub Array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size of Array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
        
    }
    return 0;
}