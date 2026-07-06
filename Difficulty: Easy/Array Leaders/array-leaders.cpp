class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		// code here
		vector<int> ans;
		int leader = arr[arr.size() - 1];
		
		ans.push_back(leader);
		
		for (int i = arr.size() - 2; i >= 0; i--) {
			if (arr[i]>leader||arr[i]==leader) {
				leader = arr[i];
				ans.push_back(leader);
				
			}
		
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};
