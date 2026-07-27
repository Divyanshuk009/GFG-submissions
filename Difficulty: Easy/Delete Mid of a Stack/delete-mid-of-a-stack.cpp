class Solution {
public:
    // Helper function to delete the middle element
    void solve(stack<int>& s, int count, int size) {
        // Base case: If we have reached the middle element
        if (count == size / 2) {
            s.pop();
            return;
        }
        
        // Store the top element
        int num = s.top();
        // Remove the top element to access the ones below it
        s.pop();
        
        // Recursive call for the remaining elements
        solve(s, count + 1, size);
        
        // Push the stored element back after returning from the recursion
        s.push(num);
    }
    
    // Function to delete middle element of a stack
    void deleteMid(stack<int>& s) {
        // Calculate the size of the stack here instead of passing it as an argument
        int sizeOfStack = s.size(); 
        int count = 0;
        
        solve(s, count, sizeOfStack);
    }
};