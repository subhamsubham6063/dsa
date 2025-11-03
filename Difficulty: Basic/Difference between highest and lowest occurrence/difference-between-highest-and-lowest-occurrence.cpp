class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        map<int ,int>mp;
        set<int>s;
        
        for(auto &it:arr){
            mp[it]++;
            s.insert(it);
        }
        
        int mx=-1e9,mn=1e9;
        
        for(auto &it:mp){
            mx=max(mx,it.second);
            mn=min(mn,it.second);
        }
        
        if(s.size()==1)return 0;
        
        return abs(mx-mn);
        
        
    }
};