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
Node *insert(vector<int> &arr, int si, int ei)
{
    if (si > ei)
        return NULL;
    int mid = si + (ei - si) / 2;
    Node *root = new Node(arr[mid]);
    root->left = insert(arr, si, mid - 1);
    root->right = insert(arr, mid + 1, ei);
    return root;
}
Node *Balancedtree(vector<int> &arr)
{
    if (arr.empty())
        return NULL;
    return insert(arr, 0, arr.size() - 1);
}
void Inorder(Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data<<" ";
    Inorder(root->right);
}

int main()
{
    vector<int> arr = {-10, -3, 0, 5, 9};
    Node* root=Balancedtree(arr);
    Inorder(root);
}