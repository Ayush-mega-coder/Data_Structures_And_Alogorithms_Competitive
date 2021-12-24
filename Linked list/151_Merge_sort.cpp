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
    void MergeSorting(Node **head)
    {
        Node *cur = *head;
        Node *first;
        Node *second;
        if (!cur || !cur->next)
            return;

        FindMiddle(cur, &first, &second);

        MergeSorting(&first);
        MergeSorting(&second);
        *head = MergeBoth(first, second);
    }

    Node *MergeBoth(Node *first, Node *second)
    {
        Node *answer = NULL;

        if (!first)
            return second;
        else if (!second)
            return first;

        if (first->data <= second->data)
        {
            answer = first;
            answer->next = MergeBoth(first->next, second);
        }
        else
        {
            answer = second;
            answer->next = MergeBoth(first, second->next);
        }
        return answer;
    }

    void FindMiddle(Node *cur, Node **first, Node **second)
    {
        Node *fast;
        Node *slow;
        slow = cur;
        fast = cur->next;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *first = cur;
        *second = slow->next;
        slow->next = NULL;
    }

    //Function to sort the given linked list using Merge Sort.
    Node *mergeSort(Node *head)
    {
        MergeSorting(&head);    
        return head;
        // your code here
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

    for (int i = 0; i < 4; i++)
    {
        push(&head, arr1[i]);
    }
    cout << "Linked List Before Sorting: " << endl;
    printList(head);
    cout << endl;
    Solution obj;
    obj.MergeSorting(&head);
    cout << "Linked List After Sorting: " << endl;
    printList(head);

    return 0;
}
