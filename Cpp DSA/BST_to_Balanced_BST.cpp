#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *insert(Node *root, int n)
{
    Node *newnode = new Node(n);
    if (root == NULL)
    {
        root = newnode;
        return root;
    }
    else if (root->data > newnode->data)
    {
        root->left = insert(root->left, n);
    }
    else
        root->right = insert(root->right, n);
    return root;
}
Node *builtBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
Node *builttree(vector<int> &ans, int si, int ei)
{
    if (si > ei)
        return NULL;
    int mid = si + (ei - si) / 2;
    Node *root = new Node(ans[mid]);
    root->left = builttree(ans, si, mid - 1);
    root->right = builttree(ans, mid + 1, ei);
    return root;
}
void Inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}
Node *buildBalancedTree(Node *root)
{
    
    vector<int> ans;
    Inorder(root, ans);
    return builttree(ans, 0, ans.size() - 1);
}
void preorder(Node*root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
    preorder(root);
    cout<<endl;
    Node *balanced_root = buildBalancedTree(root);
    preorder(balanced_root);
}