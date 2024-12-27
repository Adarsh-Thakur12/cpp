#include <iostream>
using namespace std;
int main()
{
    int start, end, i,j;
    cin >> start >> end;
    for (i = start; i <= end; i++) // for given range
    {
        for ( j = 2; j <= i; j++) // for particular number
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<i<<" ";
        }
    }
    
}