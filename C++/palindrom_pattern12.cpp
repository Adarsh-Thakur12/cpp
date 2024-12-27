#include <iostream>
using namespace std;
int main()
{
    int num;
    int i, j, k;
    cout << "Enter the NUmber of Rows:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        int p = 0;
        int space = (num - i);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
            p++;
        }
        for (j = 2; j <= i; j++)
        {

            cout << j << " ";
            p++;
        }
        cout << endl;
    }
}