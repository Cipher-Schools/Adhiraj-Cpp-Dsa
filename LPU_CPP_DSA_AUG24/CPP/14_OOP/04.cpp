//Inheritance introduction
#include<iostream>
using namespace std;

// class Parent{ //base class
//     public:
//     int num;

// };

// //derieved class
// class Child : public Parent{
//     public:
//     int childNum;
// };

//------------------------------------------------

//zombie shooter
//diferrent types of zombies

class MasterZombie{
    protected:
    string name;
    int height;
    int power;


};


class zombie1 : public MasterZombie{

    string description;
    void fly(){
        cout << name;
    }
};

class zombie2 : MasterZombie{


    void spitFire(){

    }

};
 
int main()
{

    zombie1 z1;

    // z1.name = "John";
    
}