//pure virtual functions

#include<iostream>
using namespace std;
 
class BasePeice{
    public:
    virtual void move() = 0;
};

class King : public BasePeice{

    void move() override{
        cout << "King moved 1 step";
    }

};

class Queen : public BasePeice{

};

class Rook : public BasePeice{

};

class Knight : public BasePeice{

};

class Pawn : public BasePeice{

};

int main()
{
    BasePeice *bp = new King();

    bp->move();
    
}