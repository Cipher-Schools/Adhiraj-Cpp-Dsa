//Encapsulation

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int balance = 0;

    public:

    void deposite(int amount){
        if(amount>0) balance += amount;
    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance) balance -= amount;
    }

    int getBalance(){
        return balance;
    }
};
 
int main()
{
    BankAccount b1;

    b1.deposite(100);

    b1.withdraw(150);

    cout << b1.getBalance();
}