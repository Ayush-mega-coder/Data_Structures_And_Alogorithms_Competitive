#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node* next;

};

node* newNode(int key){
    node* temp = new node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}

//function to detect loop and remove loop
node* detectAndRemoveLoop(node* & head){
    //if list is empty or single node
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    //creating slow and fast pointer and we will increase slow by one and fast by two
    node* slow = head, *fast=head;
    slow = slow->next;
    fast = fast->next->next;

    while(fast && fast->next){
        if(slow==fast){
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    // if loop doesnt exist 
    if(slow!=fast){
        return NULL;
    }
    //if loop exists
    //putting slow pointer to head
    slow = head;
    while(slow!=fast){
         slow=slow->next;
         fast = fast->next;
    }
    return slow;

    
}



void printList(node* &node){

    while(node!=NULL){
        cout<<node->key<<" ";
        node = node->next;
    }
}

int main(){

    node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    // printList(head);

    // creating a loop
    head->next->next->next->next->next = head->next->next;
    // printList(head);

    node* res = detectAndRemoveLoop(head);
    if(res==NULL){
        cout<<"No Loop detected"<<endl;
    
    }
    else
    cout<<"Loop is detected at: "<<res->key;


    return 0;
}