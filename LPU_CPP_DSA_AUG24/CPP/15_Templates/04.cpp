//Multiple templates

#include<iostream>
using namespace std;
 
template <typename T1, typename T2>
void displayLoot(T1 item, T2 quantity){
    cout << "You received : " << quantity << " quantity of " << item << endl;
}
int main()
{   
    displayLoot("Coins", 1000);
}