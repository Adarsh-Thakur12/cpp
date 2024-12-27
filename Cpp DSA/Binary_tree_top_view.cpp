#include <iostream>
#include <queue>
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
static int idx = -1;
node *builttree(vector<int> nodes)
{
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
// void levelorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             cout << endl;
//             if (q.empty())
//             {
//                 break;
//             }
//             q.push(NULL);
//         }
//         else
//         {
//             cout << curr->data<<" ";
//             if (curr->left != NULL)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right != NULL)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }
void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
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
int main()
{
    vector<int> nodes = {1, 2, 4, 9, 10, -1, -1, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    node *root = builttree(nodes);
    preorder(root);
    cout << endl;
    levelorder(root);
}