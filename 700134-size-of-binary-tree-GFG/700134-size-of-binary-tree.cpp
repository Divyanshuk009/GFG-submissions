/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* root) {
       
        // code here
               int count=0;

        if(root==nullptr){
            return 0;
        }
       else{
           count++;
       }

      int left= getSize(root->left);
      int right = getSize(root->right);
      return count+left+right;
         
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna