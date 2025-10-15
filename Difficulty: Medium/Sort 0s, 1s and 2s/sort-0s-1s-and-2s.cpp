class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
        int l=0,m=0,r=n-1;
        //0, 1, 2, 0, 1, 2
        //  [0, 0, 1, 1, 2, 2]
        while(m<=r){
            if(arr[m] == 0){
                swap(arr[l],arr[m]);
                l++;
                m++;
            }else if(arr[m]==1){
                m++;
            }else if(arr[m] == 2){
                swap(arr[m],arr[r]);
               // m++;
                r--;
            }
        }
        
    }
};