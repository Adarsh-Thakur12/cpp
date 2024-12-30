#include <iostream>
#include <vector>
using namespace std;
int activity(vector<int> start, vector<int> end)
{
    int count = 1;
    int currEnd = end[0];
    for (int i = 0; i < start.size(); i++)
    {
        if (start[i] >= currEnd)
        {
            count++;
            currEnd = end[i];
        }
    }
    return count;
}
int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    cout << activity(start, end);
}