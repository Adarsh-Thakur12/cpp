                // BINARY TO DECIMAL
#include <iostream>
using namespace std;
void convert(int num)
{
    int n = num;
    int pow = 1;
    int decimal = 0;
    while (n != 0)
    {
        int rem = n % 10;
        decimal += rem * pow;
        pow*=2;
        n = n / 10;
    }
    cout << decimal;
}
int main()
{
    int num;
    cout << "Enter the Binary number ";
    cin >> num;
    convert(num);
    return 0;
}