class Solution {
  public:
    int countSquares(int n) {
        if(n == 1){
            return 0;
        }
        for(int i = 0 ; i < n ; i++){
            if(i*i >= n){
                return i-1;
            }
        }
    }
};