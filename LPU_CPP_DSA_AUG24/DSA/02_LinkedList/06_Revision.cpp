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
    // create a node in heap memory
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next = n;
}


void deletionAtHead(Node* &head){
    Node* temp = head;

    head = head->next;
    delete temp;

}

 
int main()
{
    Node* head = NULL;
    insertAtHead(head, 5);

    insertAtEnd(head, 10);

}