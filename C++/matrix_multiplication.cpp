#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m2, m1;
    cout << "Enter the NUmber of row and column:";
    cin >> n1 >> m1;
    cout << "Enter the NUmber of row and column:";
    cin >> n2 >> m2;
    int a[n1][m1];
    int b[n2][m2];
    cout << "Enter elements of MAtrix 1" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of MAtrix 2" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> b[i][j];
        }
    }
    if (m1 != n2)
    {
        cout << "Multiplication is NOt Possible";
    }
    else
    {
        int m[n1][m2];
        for (int i = 0; i < n1; i++)
        {
            // for (int j = 0; j < m2; j++)
            // {
            //     m[i][j] = 0;
            // }

            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m2; j++)
                {
                    m[i][j] = 0;
                    for (int k = 0; k < m1; k++)
                    {
                        m[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m2; j++)
                {
                    cout << m[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}