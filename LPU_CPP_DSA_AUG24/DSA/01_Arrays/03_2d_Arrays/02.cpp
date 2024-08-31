//questions

#include<iostream>
using namespace std;

int rowSum(int arr[][3], int row, int col){

    int max = INT_MIN;
    int rowIdx = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        if(sum > max){
            max = sum;
            rowIdx = row;
        }
    }

    cout << "Max sum is : " << max << endl;

    return rowIdx;
}
void wavePrint(int arr[][3], int r, int c){
    for(int col = 0; col < 3; col++){
        if(col % 2 == 1){
            for(int row = r - 1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}
 
int main()
{
    int arr[3][3] = {0,0,0,0,1,0,0,0,0};

    cout << rowSum(arr,3,3);
}