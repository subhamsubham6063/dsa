class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans=arr[0],temp=0;
        for(auto it:arr){
            temp+=it;
            ans=max(ans,temp);
            if(temp<0)temp=0;
        }
        return ans;
        
    }
};