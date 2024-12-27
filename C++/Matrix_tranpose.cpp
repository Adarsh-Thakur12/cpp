#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter Number of rows and column";
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int swap;
    swap = n;
    n = m;
    m = swap;
    cout<<"*************"<<endl;
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}