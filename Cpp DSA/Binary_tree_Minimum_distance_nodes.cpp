// Minimum Distance Between two Nodes of Binary Tree
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
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    node *left = LCA(root->left, n1, n2);
    node *right = LCA(root->right, n1, n2);
    if (left != NULL && right != NULL)
        return root;
    return left == NULL ? right : left;
}
int dist(node *root, int n)
{
    if (root == NULL)
        return -1;
    if (root->data == n)
        return 0;
    int left = dist(root->left, n);
    if (left != -1)
    {
        left += 1;
        return left;
    }
    int right = dist(root->right, n);
    if (right != -1)
    {
        right += 1;
        return right;
    }
    return -1;
}
int MinDist(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    return dist1 + dist2;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = builttree(nodes);
    int mind = MinDist(root, 4, 6);
    if (mind == -1)
    {
        cout << "Node is not present";
    }
    else
    {
        cout << "Minimum Distance is " << mind;
    }
}