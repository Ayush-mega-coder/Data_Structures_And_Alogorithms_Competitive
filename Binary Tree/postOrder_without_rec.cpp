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

void postOrder(node *root)
{
    if (root == NULL)
        return;

    //creating an empty stack and push the root
    stack<node *> s;
    s.push(root);

    //create an another to stack the postorder stack
    stack<int> out;

    //loop till stack is empty
    while (!s.empty())
    {

        //pop a node from the stack and push data into the output stack
        node *curr = s.top();
        s.pop();

        out.push(curr->data);

        if (curr->left)
            s.push(curr->left);
        if (curr->right)
            s.push(curr->right);
    }

    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
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
    postOrder(root);
}