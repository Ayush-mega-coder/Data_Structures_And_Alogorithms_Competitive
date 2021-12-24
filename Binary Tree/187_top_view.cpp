//Top view of binary tree using iterative approach

#include <iostream>
#include <queue>
#include <map>
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

void topView(Node *root)
{

    //taking a map which will contain a height and value at that height
    map<int, int> m;
    //taking a queue having value a node and height
    queue<pair<Node *, int>> q;

    //pushing the root and 0 as a height(level 0) in the queue
    q.push({root, 0});
    if (!root)
        return;

    while (!q.empty())
    {
        //node t contains the first value in the queue that is node
        Node *t = q.front().first;
        //h contains the second value that is height
        int h = q.front().second;
        //pop the element
        q.pop();

        //Now checking if the map is 0 or there is any value present in the map. if the map is 0 then we can insert the value in the map but if map already has a value then it means that at that level there is already a value
        if (!m[h])
            //if map in empty then put the data at map
            m[h] = t->data;

        //now travese the right and left node of the tree and not null put these value in queue
        //for left we take height as h-1 and for right h+1

        if (t->left)
            q.push({t->left, h - 1});
        if (t->right)
            q.push({t->right, h + 1});
    }
    //now print the value in the map
    for (auto x : m)
    {
        cout << x.second << " ";
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    topView(root);
}