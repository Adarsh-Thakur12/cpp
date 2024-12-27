#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of ARRAY:";
    cin >> n;
    int arr[n];
    int sum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        //  cout << "arr[i]" << endl;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                
            }
            cout << endl;
        }
    }
    return 0;
}