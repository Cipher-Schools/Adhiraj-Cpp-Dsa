//Friend functions - example 1

#include<iostream>
using namespace std;

class Distance{
    private:
    int meter;

    public:
    Distance(){
        this->meter = 10;
    }

    friend int increaseDistance(Distance);
};

int increaseDistance(Distance d1){
    d1.meter += 20;
    return d1.meter;
}

int main()
{
    Distance d;

    cout << increaseDistance(d);
}