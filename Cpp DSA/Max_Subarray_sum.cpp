#include <iostream>
using namespace std;
int Subsum(int *a, int n)
{
    int max_sum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int curr_sum = 0;
            for (int k = start; k <= end; k++)
            {
                curr_sum += a[k];
            }
           max_sum=max(curr_sum,max_sum);
        }
    }
    return max_sum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int max_sum = Subsum(arr,n);
    cout <<"Maximum Sum = "<< max_sum;
}