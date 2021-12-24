#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Solution
{
public:
    Node *mergeTwoList(Node *l1, Node *l2)
    {

        Node *t1 = l1, *t2 = l2;
        Node dummy;

        //head and tail of final sorted list
        Node *head = &dummy;
        Node *tail = &dummy;

        //adding all elements in new sorted list until one or both list got exhausted

        while (t1 && t2)
        {
            if (t1->data < t2->data)
            {
                Node *temp = t1->next;
                t1->next = NULL;
                tail->next = t1;
                tail = tail->next;
                t1 = temp;
            }
            else
            {
                Node *temp = t2->next;
                t2->next = NULL;
                tail->next = t2;
                tail = tail->next;
                t2 = temp;
            }
        }

        //checking if any list get exhausted
        if (t1)
            tail->next = t1;
        if (t2)
            tail->next = t2;

        return head->next;
    }
};

void push(Node **head_ref, int new_data)
{

    Node *new_Node = new Node();
    new_Node->data = new_data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}

void printList(Node *Node)
{
    while (Node != NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

int main()
{
    Node *head = NULL;
    int l1[] = {4, 2, 1};
    int l2[] = {4, 3, 1};
    for (int i = 0; i < 3; i++)
    {
        push(&head, l1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        push(&head, l2[i]);
    }
    printList(head);
    cout << endl;
    Solution obj;
    // Node* newhead = obj.mergeTwoList(*l1,*l2);
    // obj.mergeTwoList(head);
    // printList(obj.mergeTwoList(*l1,*l2));

    return 0;
}