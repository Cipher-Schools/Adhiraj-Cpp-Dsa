//Public, Protected and Private inheritance

#include<iostream>
using namespace std;

class Base{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class PublicDerieved : public Base{
    //x is public
    //y is protected
    //z is not accessible

};
 
class ProtectedDerieved : protected Base{
    //x is protected
    //y is protected
    //z is not accessible
};

class PrivateDerieved : private Base{
    //x is private
    //y is private
    //z is not accessible

    // void print(){
    //     cout << z;
    // }
};

int main()
{
    PrivateDerieved pd1;

    // pd1.x;
}