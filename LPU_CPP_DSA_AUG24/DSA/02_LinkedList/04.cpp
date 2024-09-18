// sort a LL using merge sort

#include<iostream>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
    }

};

Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* merge(Node* left, Node* right){

    if(left == NULL) return right;
    if(right == NULL) return left;

    if(left->data < right->data){
        left->next = merge(left->next, right);
        return left;
    }
    else{
        right->next = merge(left, right->next);
        return right;
    }
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* middle = getMiddle(head);
    Node* secondHalf = middle->next;

    Node* left = mergeSort(head);
    Node* right = mergeSort(secondHalf);

    return merge(left, right);


}

int main()
{
 
}