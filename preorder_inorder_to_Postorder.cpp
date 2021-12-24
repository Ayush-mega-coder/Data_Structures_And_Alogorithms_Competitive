// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Tree node
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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
void postPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    inorderPrint(root->right);
    cout << root->data << " ";
}

// Driver program
int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    //build tree
    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    postPrint(root);

    return 0;
}
