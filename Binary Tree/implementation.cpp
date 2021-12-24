#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    //val is the key or the value that has to be added to the data part

    Node(int val)
    {
        data = val;

        //left and child node will be initialized to null

        left = NULL;
        right = NULL;
    }
};

int main()
{
    //create root
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    return 0;
}