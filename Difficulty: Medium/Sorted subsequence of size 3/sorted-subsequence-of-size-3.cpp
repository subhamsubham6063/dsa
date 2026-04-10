class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        
        int n= arr.size();
        int first=INT_MAX,second=INT_MAX,confirm_1st;
        for(int i=0;i<n;i++){
            if(arr[i]<=first){
                first=arr[i];
            }else if(arr[i]<=second){
                confirm_1st=first;
                second=arr[i];
            }else{
                return {confirm_1st,second,arr[i]};
            }
        }
        
        return {};
        
    }
};