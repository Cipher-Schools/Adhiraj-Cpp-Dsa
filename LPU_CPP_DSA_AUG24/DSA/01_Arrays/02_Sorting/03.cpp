//insertionSort

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i = 0; i<= size-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
 
int main()
{
    int arr[5] = {4,2,7,5,1};

    insertionSort(arr, 5);

    for(int i : arr){
        cout << i << " ";
    }
}