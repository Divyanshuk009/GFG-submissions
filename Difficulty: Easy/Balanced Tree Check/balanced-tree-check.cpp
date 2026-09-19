/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        int left= height(root->left);
        int right = height(root->right);
        int ans=max(left, right) + 1;
        return ans;
    }
  public:
    bool isBalanced(Node* root) {
        // code here
        if(root==NULL){
            return true;
        }
        
        int diff = abs(height(root->left)- height(root->right));
        
       
     return (diff <= 1) && isBalanced(root->left) && isBalanced(root->right);
    }
};