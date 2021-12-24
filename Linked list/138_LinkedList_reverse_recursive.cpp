
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node* reverseRecursive(Node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next=NULL;

    return newhead;
}


void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();

    // head = new Node();

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = NULL;

    printList(head);
    cout << endl;


    Node* newhead = reverseRecursive(head);
    printList(newhead);

    return 0;
}