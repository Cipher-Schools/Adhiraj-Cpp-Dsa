//Exception Handling

//An exception is an unexpected event that occurs during program execution

// power = health / enemiesKilled;
//At the end of the game, i will display the power
//But during gameplay, user killed 0 enemies -> power? 40/0

// How we handle?
/*
    try{
        code that may raise exception
        throw
    }

    catch(e){
        code to handle the exception
    }

    1. -> we will place the code that might generate exception inside the 'try block'.
    Every try block is flowwoed by the 'catch block'

    2. -> When an exception occurs, the 'throw statement' throws and exception, which is caught by the 'catch block'

    3. -> The 'catch block' cannot be used without the 'try block'

*/

#include<iostream>
using namespace std;
 
int main()
{
    int numerator, denominator;

    cout << "Enter numerator : ";
    cin >> numerator;

    cout << "Enter denominator : ";
    cin >> denominator;

    try{
        if(denominator == 0){
            throw 0;
        }
            cout << "Statement 1" << endl;

            int ans = numerator/denominator;
            cout << "Answer is : " << ans << endl;

            cout << "Statement 2" << endl;
        
    }

    catch(int e){
        cout << "Exception caught -> " << e << endl;
    }

    cout << "Statement 3" << endl;

}

