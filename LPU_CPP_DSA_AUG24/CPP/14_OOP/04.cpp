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
    public:
    string name;
    int height;
    int power;
    

    virtual void changeHealth(){
        power -= 10;
    }


};


class zombie1 : public MasterZombie{

    string description;
    void fly(){
        cout << name;
    }
};

class zombie2 : public MasterZombie{

    public:
    void spitFire(){

    }

    void changeHealth() override{
        cout << "Health -20";
    }

};
 
int main()
{

    zombie1 z1;

    // z1.name = "John";

    MasterZombie *m1 = new zombie2();
    m1->changeHealth();
    
}