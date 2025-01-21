#include <iostream>
#include <vector>
using namespace std;
vector<int> path;
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
void printpath(vector<int>&path)
{
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}
void ansv(Node *root, vector<int> &path)
{
    if (!root)
        return;
    path.push_back(root->data);
    if (!root->left && !root->right)
    {
        printpath(path);
        path.pop_back();
        
    }
    ansv(root->left, path);
    ansv(root->right, path);
    path.pop_back();
}
void Paths(Node *root)
{
    ansv(root, path);
}

int main()
{
    int arr[] = {5, 1, 3, 4, 2, 7};
    Node *root = builtBST(arr, 6);
    Paths(root);
}