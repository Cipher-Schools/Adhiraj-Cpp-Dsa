//types of inheritance

//Single inheritance
// class Base{

// };

// class Derieved : public Base{

// };

// -----------------------------------------------

// Multilevel inheritance

// class A{
//     public:
//     int numA = 10;

//     void printA(){
//         cout << numA;
//     }
// };

// class B : public A{
//     public:
//     int numB = 20;

//     void printB(){
//         cout << numB; 
//     }

// };

// class C : private B{
//     public:
//     int numC = 30;


//     void printC(){
//         cout << numC; 
//     }
// }


// -----------------------------------------------

// Multiple inheritance

class A{
    public:
    int numA = 10;

    void print(){
        cout << numA;
    }
};

class B{
    public:
    int numB = 20;

    void print(){
        cout << numB;
    }
};

class C : public A, public B{

};


#include<iostream>
using namespace std;
 
int main()
{
    C c1;
    c1.A::print();
}