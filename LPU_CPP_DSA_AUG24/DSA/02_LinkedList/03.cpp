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

Node* floydDetectLoop(Node* head){
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return slow;
    }

    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL) return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp=temp->next;
    }

    temp->next = NULL;
}

void display(Node* head){
    Node* temp = head;

    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    while(temp!=head);
    
}

int main()
{
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    // if(floydDetectLoop(head)){
    //     cout << "LOOP" << endl;
    // }
    // else cout << "NO LOOP" << endl;

}