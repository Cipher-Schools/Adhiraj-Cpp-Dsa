//---------------------------------------------------
// Questions on Arrays | Day 6 CPP & DSA Bootcamp - Part 2 
//cpp
#include<iostream>
#include<vector>
using namespace std;

int findLargest(int arr[], int size){
    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

//15:58
int findSecondLargest(int arr[], int size){
    int max = INT_MIN, s_max = INT_MIN;

    for(int i = 0; i< size; i++){
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i < size; i++){
        if(arr[i] > s_max && arr[i] != max){
            s_max = arr[i];
        }
    }
    return s_max;
}

//24:53
int missingNumber(int arr[],int n){
    int n_sum = (n*(n-1))/2;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return n_sum - sum;
}

//35:16
bool pairSum(vector<int> vec, int size, int target){
    sort(vec.begin(), vec.end());

    int i = 0;
    int j = size-1;

    while(i < j){
        int sum = vec[i] + vec[j];
        if(sum == target) return true;

        else if(sum < target) i++;
        else j--;
    }

    return false;
}

 
int main()
{
    int arr[5] = {2,5,7,3,1};
    cout << "Largest element is : " << findLargest(arr, 5); 
}

//java
// 5:20
// import java.util.*;

// public class Main {

//     public static int findLargest(int[] arr, int size) {
//         int max = Integer.MIN_VALUE;

//         for (int i = 0; i < size; i++) {
//             if (arr[i] > max) {
//                 max = arr[i];
//             }
//         }

//         return max;
//     }

//     public static void main(String[] args) {
//         int[] arr = {2, 5, 7, 3, 1};
//         System.out.println("Largest element is : " + findLargest(arr, 5));
//     }
// }


//---------------------------------------------------
//15:58

