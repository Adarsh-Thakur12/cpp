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
bool Findnode(node *root, int n, vector<node *> &path)
{
    if (root == NULL)
        return false;
    path.push_back(root);
    if (root->data == n)
        return true;
    int left = Findnode(root->left, n, path);
    int right = Findnode(root->right, n, path);
    if (left || right)
        return true;
    path.pop_back();
    return false;
}
node *LCA1(node *root, int n1, int n2)
{
    vector<node *> path1, path2;
    // Findnode(root, n1, path1);
    // Findnode(root, n2, path2);
    if (!Findnode(root, n1, path1) || !Findnode(root, n2, path2))
        return NULL;
    int i = 0;
    node *lca = NULL;
    while (i < path1.size() && i < path2.size())
    {
        if (path1[i]->data != path2[i]->data)
            break;
        lca = path1[i];
        i++;
    }

    return lca;
}
node *LCA2(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    node* left = LCA2(root->left, n1, n2);
    node* right = LCA2(root->right, n1, n2);
    if (left!=NULL&& right!=NULL)
        return root;
    return left == NULL ? right : left;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = builttree(nodes);
    node *ans = LCA1(root, 4, 5);
    node *ans1 = LCA2(root, 4, 5);
    if (ans != NULL)
    {
        cout << "LCA: " << ans->data << endl;
    }
    else
    {
        cout << "LCA not found!" << endl;
    }
    cout << endl;
    if (ans1 != NULL)
    {
        cout << "LCA: " << ans1->data << endl;
    }
    else
    {
        cout << "LCA not found!" << endl;
    }
    return 0;
}