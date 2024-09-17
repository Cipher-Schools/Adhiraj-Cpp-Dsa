//set
//it stores unique elements of same type in a sorted manner
//Properties -> unique elements, immutable, sorted order

#include<iostream>
#include <set>
using namespace std;
 
int main()
{
    set<int> set1 = {5,3,7,1,9,1};
    // set<int, greater<int>> set3 = {5,3,7,1,9,1};

    // set<int> set2;

    // set1[2] = 99;

    // set1.insert(8);
    // int num = 17;
    // if(set1.count(num) == 1){
    //     cout << "Yes" << endl;
    // }
    // else{
    //     cout << "No" << endl;
    // }

    // set1.erase(7);
    // cout << set1.empty() << endl;
    // set1.clear();
    // cout << set1.empty() << endl;


    for(auto i : set1){
        cout << i << " ";
    }
}