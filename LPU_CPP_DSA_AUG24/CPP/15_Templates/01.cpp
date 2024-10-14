//class Templates

// a class template defines a class that works with different data types

#include<iostream>
using namespace std;

// class Calculate{

//     private:
//     int x,y;

//     public:
//     Calculate(int num1, int num2){
//         x = num1;
//         y = num2;
//     }

//     void add(){
//         cout << x + y;
//     }
// };

template <class T>
class Calculate{

    private:
    T x,y;

    public:
    Calculate(T num1, T num2){
        x = num1;
        y = num2;
    }

    void add(){
        cout << x + y << endl;
    }

    void sub();
};

template <class T>
void Calculate<T>::sub(){
    cout << x - y << endl;
}

 
int main()
{
    // Calculate obj1(5,6);

    // obj1.add();

    Calculate<int> objInt(5,7);
    objInt.add();

    Calculate<double> objDouble(2.0 , 5.01);
    objDouble.add();

    Calculate<string> objStr("Hello", " World");
    objStr.add();


}