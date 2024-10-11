//Map

#include<iostream>
#include <map>
using namespace std;
 
int main()
{
    // map<int, string> students = {{1,"Aakash"}, {2, "Vishwas"}, {3,"Akansh"}};

    map<int, string> students;

    //add element 
    students[1] = "Aakash";
    students[2] = "Vishwas";

    students.insert(make_pair(3,"Akansh"));

    // for(int i = 1; i <= students.size(); i++){
    //     cout << "Student[ " << i << " ] : " << students[i] <<  endl;
    // }

    map<int, string>::iterator iter;

    for(iter = students.begin(); iter != students.end(); iter++){
        cout << iter->first << " -> " << iter->second << endl;
    }

    cout << students.size() << endl;

    // students.clear();

    students.erase(1);

    cout << students.size() << endl;



    //erase a range
    
}