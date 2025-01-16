#include <iostream>
#include <vector>
#include <queue>
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
void levelorder_iterative(node*root)
{
    vector<int>vec;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*curr=q.front();
        q.pop();
        vec.push_back(curr->data);
        if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
}
void levelorder_recursive(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            cout << curr->data<<" ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = builttree(nodes);
    levelorder_iterative(root);
    cout<<endl;
    levelorder_recursive(root);

}