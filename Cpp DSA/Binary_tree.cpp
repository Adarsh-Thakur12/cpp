#include <iostream>
#include <vector>
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
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lefth = height(root->left);
    int righth = height(root->right);
    int maxh = max(lefth, righth) + 1;
    return maxh;
}
int total_node(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftn = total_node(root->left);
    int rightn = total_node(root->right);
    int tn = leftn + rightn + 1;
    return tn;
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int currheight = height(root->left) + height(root->right) + 1;
    int leftheight = diameter(root->left);
    int rightheight = diameter(root->right);

    return max(currheight, max(rightheight, leftheight));
}
int sum_of_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsum = sum_of_nodes(root->left);
    int rightsum = sum_of_nodes(root->right);
    return leftsum + rightsum + root->data;
}
// Diameter of tree
pair<int, int> dia(node *root)
{
    //(diameter,height)
    if (root == NULL)
    {
        return make_pair(0, 0);
    }
    pair<int, int> leftinfo = dia(root->left);
    pair<int, int> rightinfo = dia(root->right);
    int currh = leftinfo.second + rightinfo.second + 1;
    int finaldia = max(currh, max(leftinfo.first, rightinfo.first));
    int finalh = max(leftinfo.second, rightinfo.second) + 1;
    return make_pair(finaldia, finalh);
}
bool isidentical(node *root, node *subroot)
{
    if (root == NULL && subroot == NULL)
        return true;
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }
    if (root->data != subroot->data)
        return false;
    return isidentical(root->left, subroot->left) && isidentical(root->right, subroot->right);
}
bool subtree(node *root, node *subroot)
{
    if (root == NULL && subroot == NULL)
        return true;
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }
    if (root->data == subroot->data)
    {
        if(isidentical(root,subroot))
        return true;
    }
    int leftsubtree = subtree(root->left, subroot);
    if (!leftsubtree)
    {
        return subtree(root->right, subroot);
    }
    return true;
}
int main()
{
    vector<int> vc = {1, 2, 4, 9, 10, -1, -1, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    vector<int> sr = {2, 4, 9, 10, -1, -1, -1, -15, -1, 6, -1, 7, -1, -1};
    node *root = builttree(vc);
    node *subroot = builttree(sr);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << "Height of tree:" << height(root);
    cout << endl;
    cout << "Total Number of Nodes:" << total_node(root);
    cout << endl;
    cout << "Sum of Nodes: " << sum_of_nodes(root);
    cout << endl;
    cout << "Diameter of Tree: " << diameter(root);
    cout << endl;
    cout << "Dia" << dia(root).first;
    subtree(root, subroot);
}