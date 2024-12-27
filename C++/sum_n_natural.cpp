#include <iostream>
using namespace std;
int fun(int a);
int main()
{
    int num, sum, sumf;
    cout << "Enter the NUmber:";
    cin >> num;
    sum = (num * (num + 1) / 2);
    sumf = fun(num);
    cout << "Sum of N Natural NUmber is:" << sum << endl;
    cout << "By Function Sum of N Natural NUmber is:" << sumf;
    return 0;
}
int fun(int a)
{
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum += i;
    }
    return sum;
}
