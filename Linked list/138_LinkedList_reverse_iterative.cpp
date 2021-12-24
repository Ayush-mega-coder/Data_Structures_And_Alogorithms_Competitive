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

        //storing the value of curreptr-next into next and changing curr-next to prev
        nextptr = currptr->next;
        currptr->next = prevptr;

        //incrementing all ptrs
        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
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

    Node *newhead = reverse(head);


    printList(newhead);

    return 0;
}