class Solution {
  public:
  public:
  int factorial(int n){
      if(n == 0 || n == 1){
          return 1;
      }
      return (n * factorial(n-1));
  }
    bool isStrong(int n) {
        int temp = n;
        int ans = 0;
        while(n > 0){
           int digit = n%10;
           ans += factorial(digit);
           n = n / 10;
        }
        if(temp == ans){
            return true;
        }
        return false;
        
        
    }
};
