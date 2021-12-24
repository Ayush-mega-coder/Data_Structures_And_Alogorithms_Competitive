#include <iostream>
using namespace std;

/* A linked list Node */
class Node
{
public:
    int data;
    Node *next;
};
bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *current = head;
    while (current->next != NULL && current->next != head)
    {
        current = current->next;
    }
    if (current->next == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }

    // Your code here
}
void push(Node **head_ref, int new_data)
{
    /* allocate Node */
    Node *new_Node = new Node();

    /* put in the data */
    new_Node->data = new_data;

    /* link the old list off the new Node */
    new_Node->next = (*head_ref);

    /* move the head to point to the new Node */
    (*head_ref) = new_Node;
}

/* Function to print Nodes in a given linked list */
void printList(Node *Node)
{
    while (Node != NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

/* Driver code */
int main()
{

    Node *head = NULL;

    int arr1[] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++)
    {
        push(&head, arr1[i]);
    }

    cout << isCircular(head);

    return 0;
}
