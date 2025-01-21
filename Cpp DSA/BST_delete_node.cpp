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
Node *getinorder(Node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}
Node *deleteNode(Node *root, int key)
{

    if (!root)
        return NULL;
    else if (root->data > key)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        else if (root->left && !root->right)
        {
            return root->left;
        }
        else if (!root->left && root->right)
        {
            return root->right;
        }
        else
        {
            Node *ans = getinorder(root->right);
            root->data = ans->data;
            root->right = deleteNode(root->right, ans->data);
            return root;
        }
    }

    return root;
}
int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
    inorder(root);
    deleteNode(root, 4);
    cout << endl;
    inorder(root);
}