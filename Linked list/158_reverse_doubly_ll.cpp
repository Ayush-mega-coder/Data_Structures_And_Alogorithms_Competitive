#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
node* reverseDLL(node * head)
{
    node* ptr1 = head;
    node* ptr2 = ptr1->next;
    
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    
    while(ptr2!=NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
        
    }
    head = ptr1;
    return head;
    
    //Your code here
}


void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {

        head->prev = n;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}


void printList(node *&node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    printList(head);
    reverseDLL(head);
    printList(head);

    return 0;
}