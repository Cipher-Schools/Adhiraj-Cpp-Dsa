//Vectors

#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> vec1 = {1,2,3,4,5};

    //adding
    vec1.push_back(10);

    // cout << vec1[6] << endl;
    cout <<  vec1.at(6);

    // for(int i : vec1){
    //     cout << i << " ";
    // }
}