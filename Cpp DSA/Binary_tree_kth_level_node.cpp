#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
node *builttree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    node *currnode = new node(nodes[idx]);
    currnode->left = builttree(nodes);
    currnode->right = builttree(nodes);
    return currnode;
}
void kthhepler(node*root,int k, int curr)
{
    if(!root)
    return ;
    if(curr==k)
    {
        cout<<root->data<<" ";
    }
    kthhepler(root->left,k,curr+1);
    kthhepler(root->right,k,curr+1);
}
void kth_level(node* root,int k)
{
    kthhepler(root,k,1);
    return;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = builttree(nodes);
    kth_level(root,3);
}