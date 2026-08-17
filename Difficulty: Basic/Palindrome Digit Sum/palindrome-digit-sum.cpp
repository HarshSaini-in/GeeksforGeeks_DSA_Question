class Solution {
  public:
    int Reverse(int sum){
        int ans = 0;
        while(sum > 0 ){
            int digit = sum % 10;
            ans = digit + (ans * 10);
            sum = sum/10;
        }
        return ans;
    }
    bool isDigitSumPalindrome(int n) {
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit;
            n = n/10;
        }
        int temp = Reverse(sum);
        if(temp == sum){
            return true;
        }
        else{
            return false;
        }
    }
};