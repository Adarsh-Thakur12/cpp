#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, rem, arm = 0;
    cout << "Enter the Number:";
    cin >> num;
    int n = num;
    while (n > 0)
    {
        rem = n % 10;
        arm += pow(rem, 3);
        n = n / 10;
    }
    if (num == arm)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not a Armstrong Number";
    }
    return 0;
}
