//Friend functions - example 2

#include<iostream>
using namespace std;

class ClassB;

class ClassA{
    private:
    int numA;

    public:
    ClassA(){
        numA = 5;
    }

    friend int add(ClassA, ClassB);
};

class ClassB{
    private:
    int numB;

    public:
    ClassB(){
        numB = 10;
    }

    friend int add(ClassA, ClassB);
};


int add(ClassA objA, ClassB objB){
    return objA.numA + objB.numB;
}
 
int main()
{
    
}