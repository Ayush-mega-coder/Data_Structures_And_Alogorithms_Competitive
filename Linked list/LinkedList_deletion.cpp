#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

//deleting at head
void deleteAtHead(Node *&head)
{
    Node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(Node *&head, int val)
{

    //if list is empty
    if (head == NULL)
    {
        return;
    }

    //if only one node is prsent
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
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
    Node *fourth = new Node();
    Node *fifth = new Node();

    // head = new Node();

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = NULL;

    printList(head);
    cout << endl;

    deletion(head,30);
    deleteAtHead(head);

    printList(head);
    return 0;
}