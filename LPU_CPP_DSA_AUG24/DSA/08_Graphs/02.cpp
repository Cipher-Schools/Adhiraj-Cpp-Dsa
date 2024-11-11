
//https://www.naukri.com/code360/problems/bfs-in-graph_973002?leftPanelTabValue=SUBMISSION

// vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
//     vector<int> result;
//     vector<bool> isVisited(n,false);
//     queue<int> q;

//     //Start BFS from node 0
//     q.push(0);
//     isVisited[0] = true;

//     while(!q.empty()){
//         int curr = q.front();
//         q.pop();

//         //add the current node to result
//         result.push_back(curr);

//         //traverse all the adjecent nodes of curr
//         for(auto neighbour : adj[curr]){
//             if(!isVisited[neighbour]){
//                 q.push(neighbour);
//                 isVisited[neighbour] = true;
//             }
//         }
//     }

//     return result;
// }