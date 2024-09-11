#include<iostream>
using namespace std;
 
void printNum(int n){ //Tail recursion
    //base case
    if(n == 0) return;

    cout << n << " ";

    //recursive relation
    printNum(n-1);
}

void printNum1(int n){ //Head recursion
    //base case
    if(n == 0) return;

    //recursive relation
    printNum1(n-1);


    cout << n << " ";


}

int power(int n){
    //base case
    if(n==0) return 1;

    return 2 * power(n-1);
}

// class Solution {
// public:
//     int fib(int n) {
//         //base case
//         if(n == 0) return 0;
//         if(n==1) return 1;

//         return fib(n-1) + fib(n-2);
//     }
// };

int main()
{
 
 cout << power(10);
}