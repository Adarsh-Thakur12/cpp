#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int l_to_r=0;
    int r_to_l=0;
    for(int i=0;i<4;i++)
    {   int j=0;
        l_to_r+=arr[i][i];

        r_to_l+=arr[j][j];
        j++;
        if(j>4)
        break;
        // for(int j=0;j<4;j++)
        // {
        //     if(arr[i][j]==arr[i][i])
        //     {
        //         l_to_r+=arr[i][j];
        //     }
        //     if(arr[i][j]==arr[j][j])
        //     {
        //         r_to_l+=arr[i][j];
        //     }
        // }
    }
    cout<<l_to_r<<endl;
    cout<<r_to_l;
    return 0;
}