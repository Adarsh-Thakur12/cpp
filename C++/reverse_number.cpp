#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, rev = 0, rem;
    int i = 3, n;
    cout << "Enter any four digit  NUmber:";
    cin >> num;
    n = num;
    int count = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        count++;
    }
    cout<<count<<endl;
    while (num > 0)
    {
        
        rem = num % 10;
        rev += rem * pow(10, count);
        num = num / 10;
        
    }
    cout << rev;
    return 0;
}