//Why should we use templates ?

//Effeciency
//Reusability
//Flexibility


#include<iostream>
#include<vector>
using namespace std;

template <class T>
class PlayerStats{
    private:
    T stats;

    public:
    PlayerStats(T initStats){
        stats =  initStats;
    }

    T getStats(){
        return stats;
    }

    void setStats(T val){
        stats += val;
    }

};

template <class T>
class Test : public PlayerStats<int>{
    Test(T val) : PlayerStats<T>(val){};
};
 
template <typename T>
void displayInventory(vector<T> &items){
    for(T i : items){
        cout < i << " ";
    }
}

int main()
{
    vector<int> coins = {10,20,30};
    vector<string> weapon = {"Sword", "Bow"};
    vector<float> exlixer = {1.5, 2.5};


    displayInventory(coins);
    displayInventory(weapon);
    displayInventory(exlixer);

    PlayerStats<int> health(100);
}