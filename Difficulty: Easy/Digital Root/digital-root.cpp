class Solution {
  public:
    int digitalRoot(int n) {
        int ans = 0;
        while(n > 0){
           
           int digit = n % 10 ;
           ans += digit; 
           n = n / 10; 
        }
        
        if(ans <= 9){
            return ans;
        }
        else{
            return digitalRoot(ans);
        }
        
    }
};