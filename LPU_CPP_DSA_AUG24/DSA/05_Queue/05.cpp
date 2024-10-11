//queue question

//https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
// class Solution
// {
//     public:
    
//     // Function to reverse first k elements of a queue.
//     queue<int> modifyQueue(queue<int> q, int k) {
        
//         stack<int> st;
        
//         for(int i = 0; i < k; i++){
            
//             int temp = q.front();
//             q.pop();
//             st.push(temp);
//         }
        
//         while(!st.empty()){
//             int temp = st.top();
//             st.pop();
//             q.push(temp);
//         }
        
//         int size = q.size() - k;
//         while(size--){
//             int temp = q.front();
//             q.pop();
//             q.push(temp);
//         }
        
//         return q;
//     }
// };