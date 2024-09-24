//Encapsulation -> is a process of wrapping similar code in one place


#include<iostream>
using namespace std;


class Rectangle{
    private:
    int length;
    int breadth;

    public:

    //setters
    void setLength(int l){
        length = l;
    }

    //getter
    int getLength(){
        return length;
    }

    // int getArea(){
    //     return length * breadth;
    // }
};
 
int main()
{
    Rectangle r1;
    r1.setLength(10);

    cout << "Length " << r1.getLength();

}