#include <iostream>
using namespace std;
int main()
{
    int n, c;
    int i, j; // Counter Variable
    cout << "Enter NUmber:";
    cin >> n;
    c = 1;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            cout << c << " ";
            c = c + 1;
        }
        cout << "\n";
    }
}
