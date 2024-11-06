//Heaps

#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size += 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if ((arr[parent] < arr[index])){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else return;
 
        }

    }

    void deletion(){
        if(size == 0) return;

        //replace the first elment with last
        arr[1] = arr[size];

        //remove the last element
        size--;

        //take the root to its correct position
        int i = 1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
        
    }

    //heapify

    void heapify(int arr[], int n, int i){
        
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
 
int main()
{
    Heap h;
    h.insert(50);
    h.insert(60);
    h.insert(55);
    h.insert(53);
    h.insert(54);

    h.print();
 
}