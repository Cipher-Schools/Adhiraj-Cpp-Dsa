//Arrays

#include<iostream>
using namespace std;
 
int main()
{
    // int arr[5] = {1,2,3,4,5};
    int arr[6];
    cout << "Enter your age ";

    for(int i : arr){
        cin >> arr[i];
    }


    for(int i : arr){
        cout << i << " ";
    } 
    cout << endl;

    // for(int i = 0; i < 5; i++){
    //     cout << i << " ";
    // }

    // arr[2] = 13;

    // for(int i : arr){
    //     cout << i << " ";
    // }
}