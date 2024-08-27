#include<iostream>
using namespace std;

int factorial(int n){
    //base condition
    if(n==0) return 1;

    //recursive relation

    return n * factorial(n-1);
}
 
int main()
{
    factorial(5);
}