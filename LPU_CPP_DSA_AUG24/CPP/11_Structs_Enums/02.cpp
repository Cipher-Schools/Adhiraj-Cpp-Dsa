//Enums

#include<iostream>
using namespace std;

enum GameState{
    INIT,
    MENU,
    PLAY
};
 
int main()
{
    enum GameState gameState = INIT;

    switch(gameState){
        case 0:
        cout << ("init state");
        break;

        case 1:
        break;

        default:
        break;
    }


}