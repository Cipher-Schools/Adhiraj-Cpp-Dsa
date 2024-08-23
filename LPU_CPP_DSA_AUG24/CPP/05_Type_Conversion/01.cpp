//Type Conversion

#include<iostream>
using namespace std;
 
int main()
{
    // int int_num = 5;

    // double double_num;

    // double_num = int_num;

    // cout << double_num;

    //implicit/automatic type conversions -> that are done automatically by the compiler

    //--------------------------------------------

//     int int_num;

//     double double_num = 5.55;

//    int_num  = double_num;

//     cout << int_num;

    //in this case, data loss will happen during conversion (Norrowing conversion)


    //--------------------------------------------

    //Expicit conversion

    // int int_num = 5;

    // double double_num;

    // double_num = (double)int_num;

    // cout << double_num;


//     int int_num;

//     double double_num = 5.55;

//    int_num  = (int)double_num;

//     cout << int_num;

    //--------------------------------------------

    // float float_num = 2.45;

    // int int_num = static_cast<int>(float_num);

    // cout << int_num;

    string a = "1234";

    stoi(a);

    cout << typeid(a).name();

    // cout << a;

}