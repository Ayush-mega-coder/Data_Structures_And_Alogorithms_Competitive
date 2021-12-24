#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};

void push(Node** head_ref, int new_data){
    // 1. allocate new node 
    Node* new_node = new Node();

    // 2. put in the data 
    new_node->data = new_data;

    // 3. make next of new node as next of prev_node
    new_node->next = (*head_ref);

    // 4. move the next of prev_node as new_node
    (*head_ref) = new_node;
}

void printList(Node *node){
    while(node != NULL){
        cout<<node->data <<" ";
        node = node -> next;

    }
}

int main(){
    Node* head = NULL;
    head = new Node();

    head->data = 2;
    head->next = NULL;

    push(&head, 7);
    push(&head, 9);
    

    printList(head);

    return 0;


}
