#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    ifstream file("test.txt");

    if(!file) cout << "Error";

    string line;

    // while(!file.eof()){
    //     getline(file, line);
    //     cout << line << endl;
    // }

    // while(getline(file, line)){
    //     // getline(file, line);
    //     cout << line << endl;
    // }

    file.close();

}