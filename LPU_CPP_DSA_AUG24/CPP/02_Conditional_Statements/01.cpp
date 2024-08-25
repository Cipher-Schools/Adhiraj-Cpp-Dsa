//if else
#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    // if(num > 0){
    //     cout << "Positive" << endl;
    // }
    // else if(num < 0){
    //     cout << "Negative" << endl;
    // }
    // else{
    //     cout << "Number is 0" << endl;
    // }

    // if(num >= 0) cout << "Positive";

    // else cout << "Negative";


    //Nested if else

    // if(num != 0){
    //     if(num >  0) cout << "Positive";
    //     else cout << "Negative";
    // }

    // else{
    //     cout << "Number is 0";
    // }

    //ternary operator

    //condition ? expression1 : expression2

    // string ans = (num >= 0) ? "Positive" : "Negative";

    string ans = (num == 0) ? "Zero" : (num > 0) ? "Positive" : "Negative";

    cout << ans;

}



// Grade Classification Based on Marks
// Write a program that takes an integer input (marks out of 100) from the user and assigns a grade according to the following rules:
// Marks >= 90: Grade A
// Marks >= 80 but < 90: Grade B
// Marks >= 70 but < 80: Grade C
// Marks >= 60 but < 70: Grade D
// Marks < 60: Grade F