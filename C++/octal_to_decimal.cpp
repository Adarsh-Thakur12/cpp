#include <iostream>
using namespace std;
int con(int x);
int main()
{
    int a, b, num;
    cout << "Enter the Octal Number:";
    cin >> num;
    // b = con(num);
    cout << "Decimal Representation:" << con(num);
    return 0;
}
int con(int x)
{
    int a = 1;
    int y = 0, rem;

    while (x > 0)
    {
        rem = x % 10;
        y += a * rem;
        a = a * 8;
        x /= 10;
    }

    return y;
}