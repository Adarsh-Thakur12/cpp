#include<iostream>
using namespace std;
int main()
{
    int num,counter;

    for(counter=1;counter<=100;counter++)
    {
        if(counter%3==0)
        continue;
        cout<<"  "<<counter  ;
        
    }
    return 0;
}