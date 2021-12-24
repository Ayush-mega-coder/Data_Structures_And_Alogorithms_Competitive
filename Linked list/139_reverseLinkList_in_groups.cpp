#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *reversek(node *&head, int k)
{
    // int count = 1;
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

void append(node **head_ref, int new_data)
{

    node *new_node = new node();

    node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref == new_node;
        return;
    }
    //else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void printList(node *&node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    node *head = new node();
    head->data = 1;

    append(&head, 2);
    append(&head, 2);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    append(&head, 7);
    append(&head, 8);

    // printList(head);

    int k = 2;
    node *newhead = reversek(head, k);
    printList(newhead);
}
