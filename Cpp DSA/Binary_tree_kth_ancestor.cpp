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
int kthancestor(node *root, int val, int k)
{
    if (root == NULL)
        return -1;
    if (root->data == val)
    {
        return 0;
    }
    int leftdis=kthancestor(root->left,val,k);
    int rightdis=kthancestor(root->right,val,k);
    if(leftdis==rightdis==-1)
    {
        return -1;
    }
    int valid=leftdis==-1?rightdis:leftdis;
    if(valid+1==k)
    {
        cout<< root->data<<endl;
    }
    return valid+1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = builttree(nodes);
    kthancestor(root,4,2);
}