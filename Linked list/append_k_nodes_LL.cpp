#include <iostream>
using namespace std;

/* A linked list node */
class node
{
public:
    int data;
    node *next;
};

void push(node **head_ref, int new_data)
{
    /* allocate node */
    node *new_node = new node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

//calculating the length of linklist
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node *kappend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;

    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

/* Driver code */
int main()
{

    node *head = NULL;
    int arr[] = {6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 6; i++)
    {
        push(&head, arr[i]);
    }
    printList(head);
    cout << endl;
    node *newhead = kappend(head, 3);
    printList(newhead);

    return 0;
}
