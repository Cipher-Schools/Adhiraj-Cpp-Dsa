//Level order traversal

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

void pintLevelOrder(Node* root){
    if (root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp != NULL){
            cout << temp->data << " ";
            if(temp->left)q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        else if(!q.empty()){
            q.push(NULL);
        }
    }
    
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

    pintLevelOrder(root);
}
