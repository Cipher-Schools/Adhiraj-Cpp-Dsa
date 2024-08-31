//double pointers
#include<iostream>
using namespace std;
 
int main()
{
    // int a = 5;

    // int *ptr1 = &a;

    // int **ptr2 = &ptr1;

    // cout << *ptr1 << endl;
    // cout << &ptr1 << endl;
    // cout << &a  << endl;

    // cout << *ptr1 << endl;
    // cout << **ptr2 << endl;

    // cout << &a << endl;
    // cout << &ptr1 << endl;
    // cout << *ptr2 << endl;

    //------------------
    int a = 5;
    int *ptr = &a;

    // *ptr = *ptr + 1;
    // cout << *ptr << endl;

    cout << ptr << endl;

    ptr = ptr + 1;
    cout << ptr;
}