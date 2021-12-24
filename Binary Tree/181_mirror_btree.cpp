#include<iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
};

node* createNode(int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;


}
void inOrder(node* root){
    if(root==NULL)
    return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);


}

//function to convert to a mirror root
node* mirrorTree(node* root){
    //base case
    if(root==NULL)
    return 0;

    //step 1. Recursive call for left child
    mirrorTree(root->left);

    //step 2: Recursive call for right child
    mirrorTree(root->right);

    //step 3: Swaping the right and left childs
    node *temp = root->left;
    root->left = root->right;
    root->right = temp;

    return root;

}

int main(){
    node* root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(2);
    root->left->right = createNode(4);
    printf("Inorder of original tree: ");
    inOrder(root);

    //function call
    cout<<"\n";

    mirrorTree(root);
    cout<<"Inorder of mirror tree: ";
    inOrder(root);
    return 0;
}