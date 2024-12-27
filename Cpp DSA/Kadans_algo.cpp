#include <iostream>
using namespace std;
int main()
{
    int max_sum = INT8_MIN;
    int curr_sum = 0;
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    cout << "Maximum Sum = " << curr_sum;
    return 0;
}