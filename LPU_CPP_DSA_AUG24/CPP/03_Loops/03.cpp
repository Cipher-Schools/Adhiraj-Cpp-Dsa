//switch case
#include<iostream>
using namespace std;
 
int main()
{
    int dayNumber;
    cout << "Enter a number(1-7) for the day of the week : ";

    cin >> dayNumber;

    switch(dayNumber){
        case 1:
            cout << "Monday" << endl;
            // break;

        case 2:
            cout << "Tuesday" << endl;
            // break;
        case 3:
            cout << "Wed" << endl;
            // break;

        case 4:
            cout << "TH" << endl;
            // break;
        case 5:
            cout << "Fr" << endl;
            // break;
        case 6:
            cout << "Sat" << endl;
            // break;

        case 7:
            cout << "Sun" << endl;
            // break;
        default:
            cout << "Invalid input";
            // break;
    }
}



// Traffic Light Simulation
// Write a program that simulates a traffic light. The user provides the color (red, yellow, or green), and the program tells what action to take:
// Red: Stop
// Yellow: Slow down
// Green: Go
