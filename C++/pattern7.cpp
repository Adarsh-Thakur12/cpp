#include <iostream>
using namespace std;
int main()
{
    int num;
    int i, j;
    cout << "Enter the Number:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = (2 * num - 2 * i);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = (2 * num - 2 * i);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}