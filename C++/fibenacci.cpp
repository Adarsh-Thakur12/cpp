#include <iostream>
using namespace std;
void fib(int n);
int main()
{
    int num;
    cout << "Enter the Number of terms:";
    cin >> num;
    fib(num);
    return 0;
}
void fib(int n)
{
    int t1 = 0, t2 = 1;
    int next;
    for (int i = 1; i <= n; i++)
    {
        cout << t1<<" ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return;
}