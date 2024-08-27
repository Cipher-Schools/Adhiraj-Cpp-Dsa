//Reference and Pointers

#include<iostream>
using namespace std;
 
int main()
{
    // int a = 5;
    // int &b = a;
    // // int b = &a;

    // cout << b << endl;

    int a = 5;

    int *ptr = &a;

    cout << "Value of a : " << a << endl;
    cout << "Address of a : " <<  &a << endl;
    cout << "Address of variable where ptr is pointing at : " << ptr << endl;

    cout << "Address of ptr variable : " << &ptr << endl;


    cout << *ptr << endl; //derefrencing the pointer

    //When * is used in declaration (int *ptr), it creates the pointer variable.
    //When not used in declaration, it acts as a  dereference operator

}