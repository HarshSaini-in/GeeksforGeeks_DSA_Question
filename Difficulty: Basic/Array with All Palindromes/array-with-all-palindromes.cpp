class Solution {
  public:
    bool Solve(int n){
        int temp = n;
        int ans = 0;
        while(n > 0){
            int digit = n % 10;
            ans = ans * 10 + digit;
            n = n/10;
        }
        if(temp == ans){
            return true;
        }
        return false;
        
    }
    bool isPalinArray(vector<int> &arr) {
        int i = 0;
        int n = arr.size();
        while(i < n){
            if(!Solve(arr[i])){
                return false;
            }
            else{
                i++;
            }
        }
        return true;
    }
};