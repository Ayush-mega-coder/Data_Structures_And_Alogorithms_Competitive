//Left view of binary tree using iterative approach

#include <iostream>
#include <queue>
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

void leftView(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << curr->data << " ";
            }
            if (curr->right != NULL)
                q.push(curr->right);
            if (curr->left != NULL)
                q.push(curr->left);
        }
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    leftView(root);
}