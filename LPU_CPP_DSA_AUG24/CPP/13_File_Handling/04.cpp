#include<iostream>
#include <fstream>
using namespace std;
 
int main()
{
    //write to a text file
    fstream file("test1.txt", ios::out);

    if(file){
        file << "testing with line 1" << endl;
        file.close();
    }
    else{
        cout << "Error in opening file" << endl;
        return -1;
    }

    //read from the same file
    // string line;
    // file.open("test1.txt", ios::in);
    // if(file){
    //     while(!file.eof()){
    //         getline(file, line);
    //         cout << "Read : " << line << endl;
    //     }
    // }
    // else{
    //     cout << "Error in opening file" << endl;
    //     return -1;
    // }

    //append
    file.open("test1.txt", ios::app);
        if(file){
            file << "testing with line 2" << endl;
            file.close();
        }

        else{
        cout << "Error in opening file" << endl;
        return -1;
    }
    
}