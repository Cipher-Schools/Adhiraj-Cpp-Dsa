#include<iostream>
#include<fstream>
using namespace std;

//ifstream -> to read from a file
//ofsrteam -> create/open write to a file
 
int main()
{
    ofstream file("test.txt");

    // if(!file){
    //     cout << "Error" << endl;
    // }
    // else{
    //     cout << "Success" << endl;
    // }

    // if(file.is_open()){

    // }

    // if(file.fail()){

    // }


    file.close();
}