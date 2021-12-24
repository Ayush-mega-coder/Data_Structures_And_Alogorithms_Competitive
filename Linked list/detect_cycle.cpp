#include <iostream>
#include<unordered_map>
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
            count++;
        }
        temp->next == startNode;
    }
}

//floyd algo
bool detectLoop(node* head){
    if(!head) return false;
    unordered_map<node*,int>m;
    while(head){
        if(!m[head]){
            m[head] = 1;
            head = head->next;
        }
        else return true;

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

    // append(&head, 1);
    append(&head, 8);
    append(&head, 3);
    append(&head, 4);
    // append(&head, 5);
    // printList(head);


    // makeCycle(head,4);
    // printList(head);
    cout<<detectLoop(head);



 
}
