#include <iostream>
using namespace std;
void water(int *height, int n)

{
    int leftmax[n], rightmax[n], waterstore = 0, height_take;
    for (int i = 1; i < n - 1; i++)
    {
        // leftmax=max(height[i-1],leftmax);
        // if (max(height[i - 1], leftmax) == leftmax)
        // {
        //     leftmax = max(height[i - 2], leftmax);
        // }
        leftmax[i] = max(height[i - 1], leftmax[i - 1]);
        // if (max(height[i + 1], rightmax) == rightmax)
        // {
        //     rightmax = max(height[i + 2], rightmax);
        // }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(height[i + 1], rightmax[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        height_take = min(leftmax[i], rightmax[i]);
        if (height_take > 0)
        {
            waterstore += (height_take - height[i]);
        }
    }

    cout << waterstore;
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    water(height, n);
    return 0;
}