#include<iostream>
using namespace std;
 
//Runtime polymorphism -> function overriding

class Base{
    public:
    virtual void print(){
        cout << "From base";
    }
};

class Derieved : public Base{
    public:
    void print(){
        cout << "From Derieved";
    }
};

int main()
{
    // Derieved d1;
    // Base b1;

    // b1.print();

    Base *d1 = new Derieved();
    d1->print();

}