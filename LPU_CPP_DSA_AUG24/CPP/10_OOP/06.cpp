//Static

#include<iostream>
using namespace std;

class Bank{

    public:
    int accNumber;
    int balance;
    static int numberOfAccounts;

    Bank(){

    }

    Bank(int accNumber, int balance){
        this->accNumber = accNumber;
        this->balance = balance;
    }

    void deposite(int amount);

    static int getNumberOfAccounts();

};

int Bank::numberOfAccounts = 0;

void Bank::deposite(int amount){
    balance += amount;
}

int Bank::getNumberOfAccounts(){
    return numberOfAccounts;
}
 
int main()
{
    Bank b1;

    cout << Bank::getNumberOfAccounts();
}