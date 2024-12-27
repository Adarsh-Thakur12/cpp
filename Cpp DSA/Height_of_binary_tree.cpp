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
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lefth = height(root->left);
    int righth = height(root->right);
    int currh = max(lefth, righth) + 1;
    return currh;
}
int main()
{
    vector<int> num = {1, 2, 4, -1, -1, 5, -1, 6,-1,7,-1,-1 ,3, -1, -1};
    node *root = builttree(num);
    preorder(root);
    int h=height(root);
    cout<<endl<<h;
}