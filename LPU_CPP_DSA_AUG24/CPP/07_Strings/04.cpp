//Array pointers

#include<iostream>
using namespace std;
 
int main()
{
    int arr[10] = {5,7,3,2,9};

    cout << arr << endl; //address of first memory block

    cout << arr[0] << endl; //element at 0

    cout << *arr << endl;

    cout << *arr + 1 << endl;

    cout << *(arr) + 1 << endl;

    cout << *(arr + 1) << endl;

}