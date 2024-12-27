#include <iostream>
using namespace std;
int fact(int a)
{
    int factorial = 1;
    for (int i = 2; i <= a; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r, f;
    cout << "Enter the value of n & r:";
    cin >> n >> r;
    f = ((fact(n) / (fact(n - r) * fact(r))));
    cout << f;
    return 0;
}