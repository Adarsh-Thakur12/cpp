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
bool validatehelper(Node *root, Node *min, Node *max)
{
    if (!root)
        return true;
    if (min && root->data <= min->data)
        return false;
    if (max && root->data >= max->data)
        return false;
    return validatehelper(root->left, min, root) && validatehelper(root->right, root, max);
}
bool validatetree(Node* root)
{
    return validatehelper(root, NULL, NULL);
}
int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
    int num=validatetree(root);
    if (num)
        cout << "Tree is Binary Search Tree";
    else
        cout << "Tree is not Binary Search Tree";
}