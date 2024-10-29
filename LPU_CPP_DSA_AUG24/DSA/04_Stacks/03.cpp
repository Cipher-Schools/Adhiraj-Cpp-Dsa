//Revision
//Stack using LL and array

#include<iostream>
using namespace std;

// class Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

//top pointer to keep track of the top of the stack
// Node* top = NULL;

// bool isEmpty(){
//     if(top == NULL) return true;
//     else return false;
// }

// void push(int val){

// }


//-----------------------------------

 
// int main()
// {
 

// }

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(){
        arr = new int[size];
        top = -1;
    }

    void push(int val){

        if(top == size - 1){
            return;
        }

        top++;
        arr[top] = val;
    }
    
};

