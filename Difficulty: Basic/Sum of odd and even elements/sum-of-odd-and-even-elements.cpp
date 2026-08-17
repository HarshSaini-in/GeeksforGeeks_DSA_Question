
class Solution {
  public:
    vector<int> findSum(int n) {
        vector<int> ans;
        int old = 0;
        int even = 0;
        while(n > 0){
           if(n % 2 == 0){
            even += n;
          }
           else{
             old += n;
             
         }
         n = n-1;
        }
        
        ans.push_back(old);
        ans.push_back(even);
        return ans;
    }
};