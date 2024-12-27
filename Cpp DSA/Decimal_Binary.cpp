#include <iostream>

using namespace std;
void convert(int num)
{
    int n = num;
    int dec = 0;
    int pow = 1;
    while (n != 0)
    {
        int rem = n % 2;
        dec+=rem * pow;
        pow=pow*10;
        n = n / 2;
    }
    cout<<dec;
}
int main()
{
    int num;
    cout << "Enter Decimal Number ";
    cin >> num;
    convert(num);
    return 0;
}