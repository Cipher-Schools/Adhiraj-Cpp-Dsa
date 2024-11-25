
#include <iostream>
using namespace std;

void func(int val){
    if (val == 0) throw "Zero is not allowed";
    if (val < 0) throw val;
    if (val > 10) throw runtime_error("Not a valid number");
}

int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    try{
        func(num);
        cout << "Number is valid" << endl;
    }

    catch(const char* e){
        cout << "String exception : " << e << endl;
    }
    catch(int e){
        cout << "Integer exception : " << e << endl;
    }
    catch(runtime_error e){
        cout << "Runtime exception : " << e.what() << endl;
    }

    //------------------------------------------------
    // int num, dem;

    // cout << "Enter two numbers ";
    // cin >> num >> dem;

    // try{
    //     if(dem == 0){
    //         throw "Division by zero is not possible";
    //     }
    //     cout << num/dem << endl;
    // }
    // catch(const char* e){
    //     cout << e << endl;
    // }

    // cout << "Hello World";
}