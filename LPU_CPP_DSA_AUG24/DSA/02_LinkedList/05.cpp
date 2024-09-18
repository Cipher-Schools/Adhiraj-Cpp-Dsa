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

int sumOfLastNElements(Node* head, int n){

    Node* first = head;
    Node* second = head;

    for(int i = 0; i < n; i++){
        if(first == NULL){
            return 0;
        }
        first =  first->next;
    }

    //Moving both pointers until first reaches at end
    while(first != NULL){
        first = first->next;
        second = second ->next;
    }

    int sum = 0;
    while(second != NULL){
        sum += second->data;
        second = second->next;
    }
    return sum;

}
 
int main()
{
 
}