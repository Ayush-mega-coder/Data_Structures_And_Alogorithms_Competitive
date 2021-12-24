#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
void append(node **head_ref, int new_data)
{

    node *new_node = new node();

    node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref == new_node;
        return;
    }
    //else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

//function to remove duplicates
void removeDuplicates(node *&head)
{
    node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
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
    node *head = new node();
    head->data = 1;

    append(&head, 2);
    append(&head, 3);
    append(&head, 3);
    append(&head, 2);
    append(&head, 4);
    append(&head, 5);
    // append(&head, 5);
    append(&head, 6);
    // printList(head);
    // cout<<endl;
    removeDuplicates(head);
    printList(head);
}
