#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    ofstream file("test.txt", ios::app);

    if(!file){
        cout << "Error";
        return -1;
    }

    file << "A" << endl;
    file << "B" << endl;
    file << "C" << endl;
    file << "D" << endl;



    file.close();
}