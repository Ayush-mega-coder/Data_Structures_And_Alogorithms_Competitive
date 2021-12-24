#include <iostream>
#include <set>
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
node *removeDuplicates(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    set<int> s;
    node *Next = head;
    node *prev;

    while (Next != NULL)
    {
        if (s.find(Next->data) != s.end())
        {
            prev->next = prev->next->next;

            node *curr = Next;
            Next = prev->next;
            delete (curr);
        }
        else
        {
            s.insert(Next->data);
            prev = Next;
            Next = Next->next;
        }
    }
    return head;
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
    // append(&head, 2);
    append(&head, 4);
    append(&head, 3);
    append(&head, 5);
    append(&head, 5);
    append(&head, 6);
    append(&head, 5);

    // printList(head);
    // cout<<endl;
    removeDuplicates(head);
    printList(head);
}
