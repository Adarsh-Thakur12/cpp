/*c++ program to check whether numbers in a vectors
 can be rearranged so that each number appears exactly once in a consecutive list of numbers.
  return true otherwise false*/
#include <bits/stdc++.h>
using namespace std;
int main
{
  int n, i;
  printf("enter the number of elements \n");
  vector<int> v;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &n);
  }
  for (i = 0; i < n; i++)
  {
    if ((v[i] + 1) != v[i + 1])
    {
      return false;
    }
  }
  return true;
}