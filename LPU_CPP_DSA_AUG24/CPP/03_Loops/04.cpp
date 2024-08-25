//Nested for loop
#include<iostream>
using namespace std;
 
int main()
{
    // for(int i = 0; i <= 5; i++){ //outer

    //     for(int j = 0; j <= 5; j++){ //inner

    //         cout << i << " " << j << endl;
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i < 5; i++){ //outer

        for(int j = 0; j < 5; j++){ //inner

            cout << "*" << " ";
        }

        cout << endl;
    }

    
}