class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int> s;
        
        while(!q.empty()){
            int elem = q.front();
            q.pop();
            s.push(elem);
            
        }
        
        while(!s.empty()){
            int eleme = s.top();
            s.pop();
            q.push(eleme);
        }
    }
};