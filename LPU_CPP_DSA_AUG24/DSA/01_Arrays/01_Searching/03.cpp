//linear search
#include<iostream>
using namespace std;
 
bool isKeyPresent(int arr[], int size, int key){
    for(int i =0; i < size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {3,5,7,2,1};
    cout << "Enter the key " << endl;

    int key;
    cin >> key;

    if(isKeyPresent(arr,5,key)){
        cout << "Key present";
    }
    else{
        cout << "key is not present";
    }
}