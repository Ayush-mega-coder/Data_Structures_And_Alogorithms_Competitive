#include <iostream>
#include <vector>
#include <algorithm>
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
    Node *reverseLL(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        Node *prev = NULL;
        Node *curr = head;
        Node *next;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
    bool palindrome(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return true;

        Node *fastptr = head;
        Node *slowptr = head;

        while (fastptr && fastptr->next)
        {
            fastptr = fastptr->next->next;
            if (fastptr)
                slowptr = slowptr->next;
        }
        Node *revhead = reverseLL(slowptr->next);
        Node *curr = head;
        while (revhead)
        {
            if (curr->data != revhead->data)
                return false;
            curr = curr->next;
            revhead = revhead->next;
        }
        return true;
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

    int arr1[] = {1, 2, 1};

    for (int i = 0; i < 3; i++)
    {
        push(&head, arr1[i]);
    }
    // printList(head);
    Solution obj;
    obj.reverseLL(head);
    cout << palindrome << " ";

    // cout << isCircular(head);

    return 0;
}
