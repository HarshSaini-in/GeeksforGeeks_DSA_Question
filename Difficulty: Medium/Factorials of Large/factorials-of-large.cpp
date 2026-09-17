class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> ans ;
        ans = {1};
        int carry = 0;
        for(int i = 2 ; i <= n ; i++){
            for(int j = 0 ; j < ans.size() ; j++){
                ans[j] = (ans[j] * i) + carry;
                if(ans[j] > 0){
                    int digit = ans[j] % 10;
                    carry = ans[j]/10;
                    ans[j] = digit;
                }
                
            }
            while(carry > 0){
            int digit = carry % 10;
            ans.push_back(digit);
            carry = carry/10;
            }
        
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};