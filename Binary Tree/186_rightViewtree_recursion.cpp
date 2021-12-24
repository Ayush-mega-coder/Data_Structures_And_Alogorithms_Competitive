//right view of binary tree using recursive approach


#include <iostream>
#include <vector>
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

void recursion(Node *root, int level, vector<int> &res)
{
    if (root == NULL)
        return;
    if (res.size() == level)
        res.push_back(root->data);

    recursion(root->right, level + 1, res);
    recursion(root->left, level + 1, res);
}
vector<int> rightView(Node *root)
{
    vector<int> res;
    recursion(root, 0, res);
    return res;
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    vector<int> vec = rightView(root);
    cout << "Right view of tree is: \n";
    for (int x : vec)
    {
        cout << x << " ";
    }
}