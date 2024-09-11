//circular ll

#include<iostream>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;

}

void insertAtTail(Node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next  = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    Node* toDel = head;
    temp->next = head->next;
    head = head->next;

    delete toDel;

}

//hw ->
void deletion(Node* &head, int pos){

}

int main()
{
 
}