//Questions

#include<iostream>
#include <stack>
using namespace std;

// https://www.geeksforgeeks.org/problems/queue-reversal/1
// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         stack<int> st;
        
//         while(!q.empty()){
//             int element = q.front();
//             q.pop();
//             st.push(element);
//         }
        
//         while(!st.empty()){
//             int element = st.top();
//             st.pop();
//             q.push(element);
//         }
//         return q;
//     }
// };


//Reverse a sentence

// void reverseSentence(string s){

//     stack<string> st;

//     for(int i = 0; i < s.length();i++){
//         string temp = "";
//         while(s[i] != ' ' && i < s.length()){
//             temp += s[i];
//             i++;
//         }

//         //found space
//         st.push(temp);
//     }


//     //print the words form stack
//     while(!st.empty()){
//         cout << st.top() << " ";
//         st.pop();
//     }

// }

//balanced Brackets

// bool isBalanced(string s){

//     stack<char> st;
//     bool flag =  true;
//     for(int i =0; i<s.size();i++){
//         if(s[i] == '[' || s[i] == '{' || s[i] == '('){
//             st.push(s[i]);
//         }

//         else if(s[i] == ']'){
//             if(!st.empty() && st.top() == '['){
//                 st.pop();
//             }
//             else{
//                 flag = false;
//                 break;
//             }
//         }
//         else if(s[i] == '}'){
//             if(!st.empty() && st.top() == '{'){
//                 st.pop();
//             }
//             else{
//                 flag = false;
//                 break;
//             }
//         }

//         else if(s[i] == ')'){
//             if(!st.empty() && st.top() == '('){
//                 st.pop();
//             }
//             else{
//                 flag = false;
//                 break;
//             }
//         }

//     }

//     if(!st.empty()) return false;
//     return flag;
    
// }

//delete from middle


//https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTabValue=SUBMISSION

// #include <bits/stdc++.h> 

// void deleteFromStack(stack<int>&inputStack, int count, int size){
//    if(inputStack.empty() || count == size/2){
//       inputStack.pop();
//       return;
//    }

//    int num = inputStack.top();
//    inputStack.pop();

//    deleteFromStack(inputStack, count+1, size);

//    inputStack.push(num);
// }
// void deleteMiddle(stack<int>&inputStack, int N){
//    int count = 0;
//    deleteFromStack(inputStack, count, N);
// }


//sort a stack
// https://www.naukri.com/code360/problems/sort-a-stack_985275?leftPanelTabValue=SUBMISSION
// #include <bits/stdc++.h> 

// void sortedInsert(stack<int> &stack, int temp){
// 	if(stack.empty() || (!stack.empty() && stack.top() < temp)){
// 		stack.push(temp);
// 		return;
// 	}

// 	int n = stack.top();
// 	stack.pop();

// 	//recursive call
// 	sortedInsert(stack, temp);

// 	stack.push(n);
// }
// void sortStack(stack<int> &stack)
// {
// 	//base
// 	if(stack.empty()){
// 		return;
// 	}

// 	int temp = stack.top();
// 	stack.pop();

// 	sortStack(stack);

// 	//sorted insertion
// 	sortedInsert(stack, temp);

// }
 
int main()
{
    // string s = "[)(]";

    // if(isBalanced(s)){
    //     cout << "Balanced";
    // }
    // else{
    //     cout << "Not balanced";
    // }
}