//find min max
#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
 
int main()
{
    int arr[5] = {5,7,2,3,9};

    cout << "Min number is : " << getMin(arr, 5);
}