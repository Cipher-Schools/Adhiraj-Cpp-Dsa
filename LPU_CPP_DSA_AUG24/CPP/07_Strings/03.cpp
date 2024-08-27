
#include<iostream>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;
    else return ch - 'A' + 'a';
}

bool isPalindrome(char arr[], int size){
    int s  = 0;
    int e = size -1;

    while(s < e){
        if(arr[s] != arr[e]) return false;

        else{
            s++;
            e--;
        }
    }
    return true;
} 

int main()
{

    char arr[100] = "Noon";

    if(isPalindrome(arr,4)){
        cout << "is palindrome" << endl;
    }
    else{
        cout << "not a palindrome" << endl;
    }

}