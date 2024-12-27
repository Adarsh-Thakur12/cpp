#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, max, c;
    int m1, m2;
    cout << "Enter three NUmbers:";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {

            max = a;
            m1 = b;
            m2 = c;
        }

        else

        {
            max = c;
            m1 = a;
            m2 = b;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
            m1 = a;
            m2 = c;
        }
        else
        {
            max = c;
            m1 = a;
            m2 = b;
        }
    }
    if (pow(max, 2) == (pow(m1, 2) + pow(m2, 2)))
    {
        cout << "Pythogorian triplet";
    }
    else
    {
        cout << "Not a Pythagorian Triplet";
    }
}
