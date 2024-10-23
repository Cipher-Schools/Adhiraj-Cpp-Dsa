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

Node* minValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    //homework
}

Node* deleteInBST(Node* root, int val){
    if(root ==  NULL) return root;

    if(root->data == val){
        //Found the node to be deleted

        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
            //left child is there
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            //right child is there
            if(root->left == NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }

        //2 child
        //either find the max from LST or min from RST
        if(root->left != NULL && root->right != NULL){
            int minVal = minValue(root->right)->data;
            //replaceing the value
            root->data = minVal;

            root->right = deleteInBST(root->right, minVal);
            return root;
        }

    }

    else if(root->data > val){
        //gp left
        root->left = deleteInBST(root->left, val);
        return root;
    }

    else{
        //go right
        root->right = deleteInBST(root->right, val);
        return root;
    }
}
 
int main()
{
 
}