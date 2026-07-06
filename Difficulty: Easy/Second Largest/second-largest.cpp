class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size()==0){
            return -1;
        }
       
       int large =-1;
       int seclarge=-1;
       
       for(int i=0;i<arr.size();i++){
           if(large<arr[i]){
               seclarge = large;
               large = arr[i];
           }
           
          else if(seclarge<arr[i]&&arr[i]<large){
               seclarge= arr[i];
           }
       }
       
       return seclarge;
    }
};