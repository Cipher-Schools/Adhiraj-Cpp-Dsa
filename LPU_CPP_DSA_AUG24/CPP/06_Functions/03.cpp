//Pass by value/reference

#include<iostream>
using namespace std;

void func1(int num){
    num++;
    cout << "Value of num in func1 is : " << num << endl;
}
 
int main()
{
    int num;
    cin >> num;

    func1(num);

    cout << "Value of num in main is : " << num << endl;
}