#include<iostream>
using namespace std;
 
int main()
{
    string str = "Hello World, World is beautiful";

    // cout << str.rfind("World");

    // str.append(" Hey");
    str.insert(0, "Hey ");

    cout << str;
}