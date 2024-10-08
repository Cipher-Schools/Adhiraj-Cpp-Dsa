// #include<iostream>
// using namespace std;
 
// //Runtime polymorphism -> function overriding

// class Base{
//     public:
//     virtual void print(){
//         cout << "From base";
//     }
// };

// class Derieved : public Base{
//     public:
//     void print() override{
//         cout << "From Derieved";
//     }
// };

// int main()
// {
//     // Derieved d1;
//     // Base b1;

//     // b1.print();

//     Base *d1 = new Derieved();
//     d1->print();

// }



#include <iostream>
using namespace std;

class Creature {
public:
    virtual void sound() {
        cout << "Some generic creature sound!" << endl;
    }
};
class Dragon : public Creature {
public:
    void sound() override {
        cout << "Roar! I am a Dragon!" << endl;
    }
};
class Unicorn : public Creature {
public:
    void sound() override {
        cout << "Neigh! I am a Unicorn!" << endl;
    }
};
void makeSound(Creature* c) {
    c->sound();
}
int main() {
    Creature* creature1 = new Dragon();
    Creature* creature2 = new Unicorn();
    
    makeSound(creature1);
    makeSound(creature2);

    delete creature1;
    delete creature2;
    
    return 0;
}




