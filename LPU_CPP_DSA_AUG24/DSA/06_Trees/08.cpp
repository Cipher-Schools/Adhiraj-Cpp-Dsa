// https://www.geeksforgeeks.org/problems/check-for-bst/1

// class Solution {
//   public:
  
//   bool is_BST(Node* root, int min, int max){
//       if(root==NULL) return true;
      
//       if(root->data > min && root->data < max){
//           bool left = is_BST(root->left,min,root->data);
//           bool right = is_BST(root->right, root->data, max);
//           return left && right;
//       }
//       else return false;
      
//   }
//     // Function to check whether a Binary Tree is BST or not.
//     bool isBST(Node* root) {
//         // Your code here
//         is_BST(root, INT_MIN, INT_MAX);
//     }
// };


//--------------------------------------------------------------------

// https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTabValue=SUBMISSION

// void inorder(BinaryTreeNode<int>* root, vector<int> &vec){
//     if(root==NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);
// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	vector<int> inorderVal;

//     inorder(root, inorderVal);

//     int i = 0;
//     int j = inorderVal.size() - 1;

//     while(i < j){
//         int sum = inorderVal[i] + inorderVal[j];
//         if(sum == target) return true;
//         else if(sum > target) j--;
//         else i++;
//     }
//     return false;


// }