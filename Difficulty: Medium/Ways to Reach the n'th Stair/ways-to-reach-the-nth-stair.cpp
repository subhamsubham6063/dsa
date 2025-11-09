class Solution {
  public:
    
    int f(int n){
        if(n==0)return 1;
        if(n<0)return 0;
        
        int one = f(n-1);
        int two= f(n-2);
        
        return one + two;
    }
  
    int countWays(int n) {
        // your code here
        
        return f(n);
        
    }
};
