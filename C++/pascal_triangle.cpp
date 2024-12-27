// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <iostream>
using namespace std;
int factorial(int a)
{
    int j, fact=1;
    for (j = 2; j <= a; j++)
    {
        fact *= j;
    }
    return fact;
}
int cr(int r, int c)
{
    int ncr;
    ncr = (factorial(r) / (factorial(r - c) * factorial(c)));
    return ncr;
}
int main()
{
    int row,  m;
    cout << "Enter row ";
    cin >> row ;
    for (int i = 0; i <= row; i++)
    {
        for(int j=0;j<=row-i;j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            
            m = cr(i, j);
            cout <<cr(i, j)<<" ";
        }
        cout << endl;
    }
}



