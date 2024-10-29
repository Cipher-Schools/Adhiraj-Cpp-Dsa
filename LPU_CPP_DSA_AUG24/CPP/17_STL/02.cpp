#include<iostream>
#include<array>
using namespace std;
 
int main()
{
    //Normal array 
    // int arr1[5] = {1,2,3,4,5};
    // int arr3[5];
    // cout << arr1[10];
    // arr1 = arr3;

    //When to use ? => very simple, low level array and don't need extra safety or functionality


    //STL array
    // array<int, 5> arr2 = {1,2,3,4,5};
    // array<int, 5> arr4;
    // cout << arr2.size();
    // arr2.at(10);
    // arr2 = arr4;

    //When to use ? => safer code, ease of use, compatibility with STL algos, faster development

    array<int, 5> arr1 = {6,2,10,3,5};

    // sort(arr1.begin(), arr1.end());

    // find(arr1.begin(), arr1.end(), 11);


    //Access
    //cout << arr1.[0];
    // cout << arr1.at(10);


    //Modify
    // arr1[0] = 10;
    // arr1.at(0) = 10;
    // cout << arr1.at(0);

    // cout << arr1.empty();
    // arr1.fill(10);
    // for(int i : arr1){
    //     cout << i << " ";
    // }
}