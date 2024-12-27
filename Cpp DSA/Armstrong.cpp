#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, dig=0,nnum = 0;
    cout << "Enter the NUmber ";
    cin >> num;
    int n = num;
    int fin=num;
    while (n != 0)
    {
        n = n / 10;
        dig++;
    }
    while (num!=0)
    {
        int rem = num % 10;
        nnum +=  pow(rem, dig) ;
        num = num / 10;
    }
    cout<<nnum;
    if(fin==nnum)
    {
        cout<<"Entered Number is Armstrong";
    }
    else{
        cout<<"Number is Not Armstrong";
    }
}