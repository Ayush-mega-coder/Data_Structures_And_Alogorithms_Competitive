//bottom view of binary tree using iterative approach

#include <iostream>
#include <stack>
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

vector<int> bottomView(Node *root)
{
    vector<int> khali;
    if (root == NULL)
        return khali;

    vector<int> ans;
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);

    //initializing level as 1
    int level = 1;

 
    while (!s1.empty())
    {
        Node *p = s1.top();
        s1.pop();

        ans.push_back(p->data);
        if (level % 2 == 1)
        {

            if (p->left)
                s2.push(p->left);
            if (p->right)
                s2.push(p->right);
        }

        else
        {
            if (p->right)
                s2.push(p->right);

            if (p->left)
                s2.push(p->left);
        }
        if (s1.size() == 0)
        {
            s1 = s2;
            while (!s2.empty())
                s2.pop();
            level++;
        }
    }
    return ans;
}


int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);
    root->left->left->right = new Node(8);

    vector<int> ans = bottomView(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}