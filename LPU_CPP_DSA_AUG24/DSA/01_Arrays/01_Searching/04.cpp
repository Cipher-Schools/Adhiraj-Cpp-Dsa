//Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;

    int mid = (s + e)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            //go to right
            s = mid + 1;
        }
        else{
            //go to left
            e = mid - 1;
        }

        mid = (s+e)/2;
    }

    return -1;

}
 
int main()
{
    int arr[5] = {2,3,4,5,6};

    cout << "Index of 3 is " << binarySearch(arr, 5,13);
}