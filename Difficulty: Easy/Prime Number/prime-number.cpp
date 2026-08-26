class Solution {
  public:
    bool isPrime(int n) {
        bool flag = true;
        if(n == 1){
            return 0;
        }
        for(int i = 2 ; i <= sqrt(n) ; i++){
            if(n % i == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};
