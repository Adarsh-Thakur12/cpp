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

int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
}