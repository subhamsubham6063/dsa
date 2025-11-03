// Function to count the number of walls that need to be reduced.
class Solution {
  public:
    int reducingWalls(vector<int>& arr, int k) {
        // your code
         priority_queue<int> pq;
         int ans=0;
         for(auto &it:arr){
             pq.push(it);
         }
         while(pq.top()>k){
             int x= pq.top();
             pq.pop();
             x-=k;
             pq.push(x);
             ans++;
         }
         return ans;
    }
};