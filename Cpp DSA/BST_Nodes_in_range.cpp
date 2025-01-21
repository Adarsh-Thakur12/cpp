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
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void PrintinRange(Node *root, int low, int high)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= low && root->data <= high)
    {
        PrintinRange(root->left, low, high);
        cout << root->data << " ";
        PrintinRange(root->right, low, high);
    }
    if (root->data < low)
    {
        PrintinRange(root->right, low, high);
    }
    if (root->data > high)
    {
        PrintinRange(root->left, low, high);
    }
}
int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
    PrintinRange(root, 3, 5);
}