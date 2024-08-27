#include<iostream>
using namespace std;
 
int main()
{
    // char arr[] = "Hello";

    // char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // char arr[100];

    // cout << "Enter your full name : ";
    // cin >> arr;
    // cin.get(arr,100);

    // cout << "Name is : " << arr;

    string str;

    cout << "Enter your full name : ";
    // cin >> str;
    getline(cin, str);

    cout << "Name is : " << str;



}