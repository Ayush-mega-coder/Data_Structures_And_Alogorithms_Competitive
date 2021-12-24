#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *reverse(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;
    while (currptr != NULL)

    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

void push(Node **head_ref, int new_data)
{

    Node *new_Node = new Node();
    new_Node->data = new_data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}

void printList(Node *Node)
{
    while (Node != NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

int main()
{
    Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        push(&head, arr[i]);
    }
    printList(head);
    cout << endl;
    Node *newhead = reverse(head);
    printList(newhead);

    return 0;
}