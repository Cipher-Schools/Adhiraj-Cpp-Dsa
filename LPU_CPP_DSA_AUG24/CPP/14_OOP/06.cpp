// types of inheritance

// Single inheritance
//  class Base{

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

// class A{
//     public:
//     int numA = 10;

//     void print(){
//         cout << numA;
//     }
// };

// class B{
//     public:
//     int numB = 20;

//     void print(){
//         cout << numB;
//     }
// };

// class C : public A, public B{

// };

// -----------------------------------------------

// Hierarchical inheritance

// class A{
//     public:
//     int numA = 10;

//     void printA(){
//         cout << numA;
//     }

// };

// class B : public A{

// };

// class C : public A{

// };

#include <iostream>
using namespace std;
class Test
{
private:
    int x;

public:
    Test(int i)
    {
        x = i;
        cout << "Called" << endl;
    }
};

int main()
{
    Test t(20);
    t = 30;
    return 0;
}



// int main()
// {
//     B b1;
//     C c1;

//     b1.printA();
//     c1.printA();
// }