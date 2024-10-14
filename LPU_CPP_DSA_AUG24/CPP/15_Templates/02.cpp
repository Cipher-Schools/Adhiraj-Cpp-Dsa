//Function templates
//A function template is a blueprint for creating functions that operates in different data types;
#include<iostream>
using namespace std;

// int add(int num1, int num2){
//     return (num1 + num2);
// }

template <typename T>
T add(T num1, T num2){
    return (num1 + num2);
}

int main()
{
    // add(2,4);

    cout << add<int>(4,5) << endl;
    cout << add<double>(3.55,5.23) << endl;
}