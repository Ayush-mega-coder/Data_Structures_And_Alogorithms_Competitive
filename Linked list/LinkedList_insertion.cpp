#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

//insert at begining
void push(Node **head_ref, int new_data)
{

    Node *new_node = new Node();
    new_node->data = new_data;

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//insert after a given node

void insertAfter(Node *prev_node, int new_data)
{

    // 1. check if the given prev_node is NULL

    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be null";
        return;
    }

    // 2. Allocate new node
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//insert node at the end
void append(Node **head_ref, int new_data)
{

    Node *new_node = new Node();

    //initialize last as fisrt node address to traverse through the linked list once we found null then it is the last node and we can add the new node there.
    Node *last = *head_ref;

    new_node->data = new_data;
    //new_node is going to be last node so make next of this node NULL

    new_node->next = NULL;

    //if the linked list is empty then make the new node as head
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

    // head = new Node();

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    printList(head);
    cout << endl;

    //insert at begin
    push(&head, 5);

    //insert after given node
    insertAfter(third, 50);

    //insert at last node
    append(&head, 60);

    printList(head);
    return 0;
}