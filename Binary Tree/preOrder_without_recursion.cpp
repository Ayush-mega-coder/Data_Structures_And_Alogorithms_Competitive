#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

void preOrder(node *root)
{
    if (root == NULL)
        return;

    stack<node *> s;
    s.push(root);

    while (!s.empty())
    {
        node *curr = s.top();
        s.pop();

        cout << curr->data << " ";

        //push the right child of the popped into the stack
        if (curr->right)
            s.push(curr->right);

        //push left child
        if (curr->left)
            s.push(curr->left);
    }
}

//printing the postorder

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    preOrder(root);
}