//Right View, LCA

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void rightView(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        //we will not add null in queue, we will calculate the size of the queue and check how many nodes are stored and traverse over it
        int size = q.size();

        for(int i = 0; i < size; i++){
            //create a curr pointer which will start from the front/beginning of the queue
            Node* curr = q.front();
            q.pop();

            if(i == size -1){
                cout << curr->data << " ";
            }

            //then we will go on the left and right of the current node

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }

}

bool getPath(Node* root, int key, vector<int>& path){

    if(root==NULL) return false;

    path.push_back(root->data);
    if(root->data == key){
        return true;
    }

    if(getPath(root->left, key, path) || getPath(root->right, key , path)){
        return true;
    }

    path.pop_back();
    return false;
}

int LowestCommonAncestor(Node* root, int node1, int node2){
    vector<int> path1;
    vector<int> path2;

    if(!getPath(root, node1, path1) && !getPath(root, node2, path2)){
        return -1;
    }

    int pathChange;
    for(pathChange = 0; pathChange < path1.size() && path2.size(); pathChange++){
        if(path1[pathChange]!= path2[pathChange]) break;
    }

    return path1[pathChange - 1];
}
 
int main()
{
      Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // rightView(root);



    int lca = LowestCommonAncestor(root, 6,7);

    if(lca == -1) cout << "No LCA" << endl;
    
    else cout << "LCA : " << lca << endl;
}