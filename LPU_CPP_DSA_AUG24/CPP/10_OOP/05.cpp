//Friend Classes

#include<iostream>
using namespace std;

class ClassA{
    private:
    int numA;

    public:
    ClassA(){
        this->numA = 10;
    }

    friend class ClassB;
};

class ClassB{
    private:
    int numB;

    public:
    ClassB(){
        this->numB = 20;
    }

    int add(){
        ClassA objA;
        return objA.numA + numB;
    }
};

int main()
{
    ClassB classB;

    cout << classB.add();
}