// //Pointer to object

#include<iostream>
using namespace std;
 
class Rectangle{
    public:
    int width, height;

    Rectangle(int w, int h){
        width =  w;
        height = h;
    }

    int area(){
        return width * height;
    }

    ~Rectangle(){
        
    }
};

// int main()
// {
//     Rectangle r1(4,5);

//     Rectangle *ptr = new Rectangle(3,4);

//     //Create a pointer to the object
//     Rectangle *rectPtr = &r1;

//     rectPtr->area();


// }


// #include<iostream>
// using namespace std;

// class Node{
// public:
// int data;
// Node* next;
// Node* prev;
// Node(int val){
// this->data = val;
// this->next = NULL;
// this->prev = NULL;

// }
// };
 
// int main()
// {
//  Node* recursive(Node* &head, int k , int c, int val ){
// Node* temp = head;
// Node* n = new Node(val);
// if(k-1==c){
// n->next = temp->next;
// temp->next = n;
// return temp;
// }
// else if(k==1){
// // Node* n = new Node(val);
// n->next = head;
// head = n;
// return head;
// }
// c = c+1;
// temp->next = recursive(temp->next, k, c, val);
// return temp;
// }
// }
