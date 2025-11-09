vector<int> dimpy(2e5+10,-1);
class Solution {
  public:
  
        int f(int x){
            if(x==0)return 0;
            if(x==1)return 1;
            if(x<0)return 0;
            if(dimpy[x]!= -1)return dimpy[x];
            int left = f(x-1);
            int right = f(x-2);
            
            return dimpy[x] = left+ right;
            
        }
  
    int nthFibonacci(int n) {
        // code here
        
        return f(n);
        
    }
};