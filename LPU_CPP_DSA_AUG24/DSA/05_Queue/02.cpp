//queue with array

#include<iostream>
using namespace std;

class MyQueue{
    int* arr;
    int size;
    int front;
    int rear;

    public:
    MyQueue(){
        arr = new int[size];
        front, rear = -1;
    }


    void push(int val){
        if(rear == size - 1){
            cout << "Queue overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = val;

        if(front == -1){
            front++;
        }
    }

    void pop(){

        if(front == -1){
            cout << "No elements in queue";
            return;
        }
        front++;
    }


    //peek front

};
 
int main()
{
 
}