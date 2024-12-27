#include <iostream>
#include <math.h>
using namespace std;
bool prime(int a);
int main()
{
    int start;
    int end;
    int num;
    cout << "Enter the Range:";
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
bool prime(int a)
{
    int i;
    for (i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}