//Selection Sort

#include<iostream>
using namespace std;
 
void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int min = i;
        for(int j = i+ 1; j < size -1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}


int main()
{
    
}