#include<iostream>
using namespace std;
int main()
{
    int num;
    
    // while(num>0)        //Using While LOOP
    // {
    //     cout<<"Enter Number ";
    //     cin>>num;
    // }
    do
    {
       cout<<"Enter NUmber " ;
       cin>>num;

    }while(num>0);
    cout<<"Loop terminated";
    return 0;
}