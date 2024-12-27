#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char word[] = "assessa";
    int start = 0, temp;
    int end = strlen(word) - 1;
   

    while (start < end)
    {
        if (word[start] != word[end])
        {
            cout << "False";
            return 0;
        }
        start++;
        end--;
    }
    cout << "True";
    return 0;
}