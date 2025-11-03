class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        auto it = lower_bound(arr.begin(),arr.end(),1);
        
        if(it != arr.end())return it - arr.begin();
        return -1;
    }
};