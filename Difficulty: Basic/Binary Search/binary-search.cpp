class Solution {
	public:
	bool binarySearch(vector<int>& arr, int k) {
		int s = 0;
		int e = arr.size() - 1;
		int mid = s + (e - s)/2;
		
		for (int i = 0; i<arr.size(); i++) {
			
			if (arr[mid] == k) {
				return true;
			}
			else if (arr[mid]<k) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
			mid = s + (e - s)/2;
			
		}}
		
	};
