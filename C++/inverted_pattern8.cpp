#include <iostream>
using namespace std;
int main()
{
    int num, count;
    int i, j;
    cout << "Enter the Number:";
    cin >> num;
    for (i = num; i >= 1; i--)
    {
        count = 1;
        for (j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}