//classes and objects

#include<iostream>
using namespace std;

class Car{
    public:
    string color;
    string name;
    int year;

};
 
int main()
{
    Car car1;

    car1.color = "Black";

    cout << "Color of car 1 is : "<< car1.color << endl;

}