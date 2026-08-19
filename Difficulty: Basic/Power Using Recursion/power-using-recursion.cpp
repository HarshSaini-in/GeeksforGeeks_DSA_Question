class Solution {
  public:
    int power(int n , int p , int ans){
        if(p == 0){
            return ans;
        }
        ans = ans*n;
        return power(n , p-1 , ans);
    }
    int recursivePower(int n, int p) {
        int ans = 1;
        return power(n , p , ans);
        
    }
};
