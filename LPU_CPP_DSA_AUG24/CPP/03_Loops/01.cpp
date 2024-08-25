//Loops

#include<iostream>
using namespace std;
 
int main()
{
    //for loop
    // for(init;termination;inc/dec){

    // }

    // for(int i = 0; i <= 10; i++){
    //     cout << i << " ";
    // }

    //Find sum of forst n natural numbers

    // int num = 5;
    // int sum = 0;

    // for(int i = 1; i <= num; i++){
    //     sum += i;
    // }

    // cout << "Sum of n natural numbers is : " << sum;

    //Also calculate the average;


    for(int i = 0; i <= 10; i++){

        // if(i == 5){
        //     break;
        // }
        //break exits the loop

        if(i==5){
            continue;
        }
        //continue skips to next iteration

        cout << i << " ";
    }

}