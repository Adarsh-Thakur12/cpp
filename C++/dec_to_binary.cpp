#include <iostream>
using namespace std;
int main()
{
    int cal[90];
    int j,i=0;
    int num, rem, com;
    cout << "Enter the NUmber:";
    cin >> num;
    while (num > 0)
    {
        cal[i] = num % 2;
        num = num / 2;
        i++;
    }
for(j=i-1;j>=0;j--)
{
    cout<<cal[j];
}
    return 0;
}