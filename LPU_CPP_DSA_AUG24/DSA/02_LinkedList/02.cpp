//Doubly LL

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    n->next = head;

    if(head != NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(Node* &head, int val){

    Node* n = new Node(val);
    Node* temp = head;

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;
}

void deletion(Node* &head, int pos){

    Node* temp = head;
    int count = 1;

    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    while(temp!= NULL && count != pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;

}

void display(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << " -> ";
        temp= temp->next;
    }
    cout << "NULL" << endl;
}


 
int main()
{
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

    insertAtHead(head, 10);

    deletion(head, 4);

    display(head);
}