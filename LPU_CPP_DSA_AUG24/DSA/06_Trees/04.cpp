#include<iostream>
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

int countNodes(Node* root){
    //base case
    if(root == NULL) return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}

int sumOfNodes(Node* root){
    if(root == NULL) return 0;

    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

int calculateHeight(Node* root){
    if(root==NULL) return 0;

    int left = calculateHeight(root->left);
    int right = calculateHeight(root->right);

    return max(left,right) + 1;

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

    cout << countNodes(root);
}