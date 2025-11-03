// User function Template for C++

class Solution {
  public:
    int numOfSubsets(vector<int>& arr, int k) {
        // code here
        
        int ans=0;
        int n=arr.size();
       for(int i=0;i<(1<<n);i++){
      int  xor_result=1;
        for(int j=0;j<n;j++){
            if (i & (1 << j)) { 
                xor_result *= arr[j]; 
            }
        }
       if(xor_result<=k)ans++;
        
       }
        return ans-1;
        
    }
};