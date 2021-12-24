#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void printPostOrder(struct Node *root)
{
    if (root == NULL)
        return;

    //first recursion on left subtree
    printPostOrder(root->left);
    //printing right subtree
    printPostOrder(root->right);
    //printing root
    cout << root->data << " ";
}

void printInOrder(struct Node *root)
{
    if (root == NULL)
        return;

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printPreOrder(struct Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
int main()
{
    struct Node *node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);

    cout << "\nPreorder of binary tree is:\n ";
    printPreOrder(node);

    cout << "\nInorder of binary tree is:\n ";
    printInOrder(node);

    cout << "\nPostorder of binary tree is:\n ";
    printPostOrder(node);
}
