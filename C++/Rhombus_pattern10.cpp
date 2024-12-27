#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int i, j;
    cout << "Enter Number of rows:";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        int space = (i - 1);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}