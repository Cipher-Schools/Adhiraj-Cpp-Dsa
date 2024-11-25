//map

#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    map<int, string> students = {{1,"student1"}, {2,"student2"}, {3,"student3"}};

    students[1] = "newStudent";

    students[5] = "student5";

    students.insert(make_pair(6,"student6"));

    // for(int i = 1; i<= students.size(); i++){
    //     cout << "Student[" << i << "] : " << students[i] << endl;
    // }

    //declaring an iter
    // map<int, string>::iterator itr;

    // for(itr = students.begin(); itr != students.end(); itr++){
    //     cout << itr->first << " " << itr->second << endl;
    // }

    //find
    // students.find(2);

}