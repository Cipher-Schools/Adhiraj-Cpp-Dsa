//User defined function types

#include<iostream>
#include<math.h>
using namespace std;
 
/*
Function with no return type and no argument
Function with no return type and arguments
Function with retrun type and no arguments
Function with return type and arguments
*/


void function1(string name){
    cout << "My name is " << name << endl;
}

int function_add(int a, int b){
    int ans = a + b;
    return ans;
}

int main()
{  
    function1("Hello");
}