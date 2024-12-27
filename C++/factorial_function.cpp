#include <iostream>
using namespace std;
void fact(int a);
int main()
{
    int num;
    cout << "Enter the NUmber:";
    cin >> num;
    fact(num);
    return 0;
}
void fact(int a)
{
    int i;
   long long int mul=1;
    for (i = a; i > 0; i--)
    {
        mul *= i;
    }
    cout << mul;
}