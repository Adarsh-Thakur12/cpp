#include <iostream>
using namespace std;
int main()
{
    int num;
    int i, j;
    int k ;
    cout << "Enter Number of rows:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                k = 1;
            }
            else
            {
                k = 0;
            }
            cout << k << " ";
            
        }
        cout << endl;
    }
}
