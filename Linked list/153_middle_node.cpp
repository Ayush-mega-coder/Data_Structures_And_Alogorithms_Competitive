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
    Node *middleNode(Node *head)     
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
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

    int arr1[] = {1, 4, 2, 5, 3};

    for (int i = 0; i < 5; i++)
    {
        push(&head, arr1[i]);
    }

    // printList(head);
    Solution obj;
    obj.middleNode(head);
    cout << "Linked List After Sorting: " << endl;
    printList(obj.middleNode(head));

    return 0;
}
