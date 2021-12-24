//Left view of binary tree using recursive approach


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

    recursion(root->left, level + 1, res);
    recursion(root->right, level + 1, res);

}
vector<int> leftView(Node *root)
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
    vector<int> vec = leftView(root);
    for(int x: vec){
        cout<<x<<" ";
    }
    
}