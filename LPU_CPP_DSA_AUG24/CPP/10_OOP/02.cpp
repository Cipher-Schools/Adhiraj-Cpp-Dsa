#include<iostream>
using namespace std;
 
class Room{
    public:
    int length;
    int breadth;
    int height;

    Room(){
        // cout << "Default constructor method" << endl;
    }

    Room(int length){
        this->length = length;
    }

    Room(int l, int b, int h){
        cout << "Constructor Called" << endl;
       this->length = l; 
       this->breadth = b;
       this->height = h;
    }

    Room(Room &r1){
        length = r1.length;
        breadth = r1.breadth;
    }

    int area(){
        return length * breadth;
    }

    int volume(){
        return length * breadth * height;
    }

    ~Room(){
        cout << "Destructor called " << endl;
    }
}; 
int main()
{
    // Room room1();
    // room1.length = 10;
    // room1.breadth = 5;
    // room1.height = 3;

    // cout << room1.area();

    Room room2(4,5,8);
    Room room3;

    cout << room2.area() << endl;

    Room room4(room2);

    cout << room4.length << endl;

}