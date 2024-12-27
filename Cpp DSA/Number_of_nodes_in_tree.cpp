#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
node *builttree(vector<int> nodes)
{
    static int idx = -1;
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    node *newnode = new node(nodes[idx]);
    newnode->left = builttree(nodes);
    newnode->right = builttree(nodes);
    return newnode;
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftc = count(root->left);
    int rightc = count(root->right);
    int currc = leftc + rightc + 1;
    return currc;
}
int main()
{
    vector<int> num = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    node *root = builttree(num);
    cout << count(root);
}