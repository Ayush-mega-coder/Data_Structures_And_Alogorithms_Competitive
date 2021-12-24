#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    //create an empty queue
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        //print front of queue and remove it
        Node *node = q.front();
        cout << node->val << " ";
        q.pop();

        //left child
        if (node->left != NULL)
        {
            q.push(node->left);
        }
        if (node->right != NULL)
        {
            q.push(node->right);
        }
    }
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->val = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}