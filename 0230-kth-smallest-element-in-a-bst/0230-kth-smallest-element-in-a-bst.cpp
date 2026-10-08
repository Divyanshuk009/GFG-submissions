/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode*root, vector<int>&vals){
        if(root==nullptr){
            return;
        }
        inorder(root->left,vals);
        vals.push_back(root->val);
        inorder(root->right,vals);

    }
    int kthSmallest(TreeNode* root, int k) {
         vector<int>vals;
         inorder(root,vals);
// 1 2 3 4 5 
        //  for(int i=0;i<vals.size();i++){
            
        //  }
        return vals[k-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna