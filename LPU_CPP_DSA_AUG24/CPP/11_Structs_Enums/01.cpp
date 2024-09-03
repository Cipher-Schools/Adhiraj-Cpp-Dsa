//Structs

#include<iostream>
using namespace std;

struct Rectangle{
    int height;
    int width;

    Rectangle(int h, int w){
        width = w;
        height = h;
    }

    void area(){
        cout << width * height;
    }

};
 
int main()
{
    struct Rectangle rect = Rectangle(4,8);
    rect.area();

}


/*
1. By default, all the members of struct are public, but in class they are private

2. There can be no null values in any struct members, but in class we can have


*/