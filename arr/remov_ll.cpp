#include <iostream>
using namespace std;

/* A linked list Node */
class Node
{
public:
    int data;
    Node *next;
};
class Solution
{

public:
    Node *removeElements(Node *head, int val)
    if(head==NULL)
    return NULL;
    {
        while (head != NULL && head->next != NULL)
        {
            if (head->next->data == val)
            {
                head->next = head->next->next;
                // head = head->next;
            }
            else
                head = head->next;
                cout<<head;
        }
        return head;
    }
};

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

    int arr1[] = {6, 5, 4, 6, 3, 2, 1};
    int val = 6;

    for (int i = 0; i < 7; i++)
    {
        push(&head, arr1[i]);
    }
    cout << "Linked List Before Sorting: " << endl;
    printList(head);
    cout << endl;
    Solution obj;
    // Node *newhead = obj.removeElements(head, val);
    cout << "Linked List After Sorting: " << endl;
    printList(obj.removeElements(head, val));

    return 0;
}
