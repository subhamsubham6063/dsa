class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
      //  int i=0,j=n-1;
        
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
               sum=sum+arr[j];
               if(sum==target){
                   ans.push_back(i+1);
                   ans.push_back(j+1);
                   return ans;
               }
            }
        }
        
    //     for(int x=1;x<n;x++){
    //         arr[x]=arr[x]+arr[x-1];
    //     }
    //   //if(n>=2)  arr[n-1]= arr[n-1]+arr[n-2];
    //     //for(auto it:arr)cout<<it<<' ';
    //     while(i<=j){
    //       int sum = arr[j]-arr[i];
    //         if(arr[j]-arr[i]==target){
    //             return{i+2,j+1};
    //         }else if(sum<target){
    //             j--;
    //         }else{
    //             i++;
    //         }
    //     }
        
        // 1 2 3 7 5 
        // 1 3 6 13 18
        
        return {-1};
        
    }
};