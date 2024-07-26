#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter left value of" << data << endl;
    root->left = buildTree(root->left);
    cout << "enter right valueof" << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal()
{
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    return 0;
}
