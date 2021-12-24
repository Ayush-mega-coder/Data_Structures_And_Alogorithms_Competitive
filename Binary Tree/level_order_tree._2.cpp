//level order traversal in a tree

#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

 
};

void levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        
        Node *curr = q.front();
   
        cout << curr->data << " ";
        q.pop();

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }

        if (curr == NULL)
        {
            q.push(NULL);
            cout << "/n";
        }
    }
}
Node *createNode(int data)
{
    Node *newnode = (Node *)malloc(sizeof(Node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    levelorder(root);
}