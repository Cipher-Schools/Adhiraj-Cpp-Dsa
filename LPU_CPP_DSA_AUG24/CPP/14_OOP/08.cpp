//Poly - > many morphism -> forms

#include<iostream>
using namespace std;
//Implemention in C++
//=> complile time polymorphism

    // 1. Function overloading

    void add(int num1, int num2){
        cout << "Sum of two int is : " << num1 + num2 << endl;
    }

    void add(int num1, int num2, int num3){
        cout << "Sum of three int is : " << num1 + num2 + num3 << endl;
    }

    void add (double num1, double num2){
        cout << "Sum of two double is : " << num1 + num2 << endl;

    }

    // int add(int num1, int num2){
    //     return num1 + num1 + 1000;
    // }


 
int main()
{
    // int a  = 5;
    // int b = 10;
    // string c = "Hello";
    // string d = " World";

    // cout << a + b << endl;
    // cout << c + d << endl;

    add(2.2,4.4);
    add(3,4,6);



    //2. Operator Overloading
}