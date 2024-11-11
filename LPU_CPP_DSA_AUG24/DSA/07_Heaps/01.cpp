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
        int largest = i;

        int left = 2*i;
        int right = 2*i + 1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }

    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


//--------------------------------
// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1

// class Solution {
//   public:
  
//   int countNodes(struct Node* root){
//       if(root==NULL) return 0;
      
//       return countNodes(root->left) + countNodes(root->right) + 1;
//   }
  
//   bool isCBT(struct Node* root, int index, int count){
//         if(root==NULL) return true;
        
//         if(index >= count) return false;
        
//         else{
//             bool left = isCBT(root->left, 2 * index + 1, count);
//             bool right = isCBT(root->right, 2 * index + 2, count);
//             return(left && right);
//         }
//   }
  
//   bool isMaxOrdeHeap(struct Node* root){
//       if(root->left == NULL && root->right == NULL) return true;
      
//       if(root->right == NULL) return(root->data > root->left->data);
      
//       else{
//           bool left = isMaxOrdeHeap(root->left);
//           bool right = isMaxOrdeHeap(root->right);
          
//           return(left && right && (root->data > root->left->data
//           && root->data > root->right->data));
          
//       }
      
//   }
  
//     bool isHeap(struct Node* tree) {
//         int index = 0;
//         int totalCount = countNodes(tree);
//         if(isCBT(tree, index, totalCount) && isMaxOrdeHeap(tree)){
//             return true;
//         }
//         return false;
//     }
// };
 
int main()
{
    Heap h;
    // h.insert(50);
    // h.insert(60);
    // h.insert(55);
    // h.insert(53);
    // h.insert(54);

    // h.print();

    int arr[] = {-1, 10,9,8,12,7};

    int n = 6;

    for(int i = n/2; i > 0; i--){
        h.heapify(arr,n,i);
    }

    for(int i = 1; i < n; i++){
        cout << arr[i] << " ";
    }


 
}