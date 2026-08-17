class Solution {
  public:
    bool isPerfectSquare(int n) {
        for(int i = 0 ; i <= (n/2)+1 ; i++){
            if(i*i == n){
                return true;
            }
        }
        return false;
    }
};