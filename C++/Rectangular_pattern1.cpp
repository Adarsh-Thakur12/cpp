#include <iostream>
using namespace std;
int main()
{
    int row, i, j, col;
    cout << "Enter NUmber of Rows: ";
    cin >> row;
    cout << "Enter NUmber of Columns: ";
    cin >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}