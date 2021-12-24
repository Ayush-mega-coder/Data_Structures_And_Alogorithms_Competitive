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

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node();
    node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }

        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

/* Driver code */
int main()
{

    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {7, 5, 4, 1};
    int arr2[] = {6, 3, 2};
    for (int i = 0; i < 4; i++)
    {
        push(&head1, arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        push(&head2, arr2[i]);
    }
    printList(head1);
    cout << endl;
 
 
    printList(head2);

    cout << endl;
    node *newhead = merge(head1, head2);
    printList(newhead);

    return 0;
}
