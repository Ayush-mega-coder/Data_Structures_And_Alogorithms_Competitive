#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int heightOfTree(struct Node *root)
{
    if (root == NULL)
        return 0;

    int lheight = heightOfTree(root->left);
    int rheight = heightOfTree(root->right);

    if (lheight > rheight)
        return (lheight + 1);
    else
        return (rheight + 1);
}

int diameter(struct Node *root){
    if(root==NULL)
    return 0;

    int lheight = heightOfTree(root->left);
    int rheight = heightOfTree(root->right);
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    int fd = max(lheight+rheight+1, max(ldiameter,rdiameter));
    return fd;


    
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->left->right->right = new Node(9);
    root->left->left->right->right->right = new Node(9);
    root->left->left->right->right->right->right = new Node(9);

    cout << diameter(root);
}