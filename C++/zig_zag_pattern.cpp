#include <iostream>
using namespace std;
int main()
{
    int n, p;
    int i, j, k;
    cout << "Enter the Number of star";
    cin >> n;
   
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }

        cout << endl;
    }
    return 0;
}