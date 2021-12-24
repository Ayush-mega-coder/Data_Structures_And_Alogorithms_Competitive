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

// making a cycle 
void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next != NULL){
        if(count==pos){
            startNode = temp;
        }
        
        temp= temp->next;
        count++;
    }
    temp->next = startNode;
}

//floyd algo
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){

        slow = slow->next;
        fast= fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
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
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);

    cout<<detectCycle(head)<<endl;

    makeCycle(head,2);
    // printList(head);
    cout<<detectCycle(head);



 
}
