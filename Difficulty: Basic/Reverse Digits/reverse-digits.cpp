class Solution {
  public:
    int reverseDigits(int n) {
        int ans = 0;
        while(n > 0){
            int digit = n % 10;
            ans = digit + (ans * 10);
            n = n/10;
        }
        return ans;
    }
};