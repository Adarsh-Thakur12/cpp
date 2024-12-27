#include <iostream>
#include <string>
using namespace std;

void rev(string ques, bool ans[])
{
    for (char c : ques)
    {
        // Mark the presence of a character in the ans array
        int index = c - 'a';  // 'a' corresponds to index 0
        ans[index] = true;
    }
}

int main()
{
    string ques = "aaddaarrsshh";
    bool ans[26] = {false};  // Array to track presence of characters a-z
    
    rev(ques, ans);
    
    for (int i = 0; i < 26; i++)
    {
        if (ans[i])
        {
            cout << char(i + 'a');  // Convert index back to corresponding character
        }
    }
    
    return 0;
}
