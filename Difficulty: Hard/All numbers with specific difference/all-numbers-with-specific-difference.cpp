class Solution {
  public:
    bool Sum_digit(int i , int d){
        int temp = i;
        int ans = 0 ;
        while(i > 0){
            int digit = i % 10;
            ans += digit;
            i = i / 10;
        }
        if(temp - ans >= d){
            return true;
        }
        return false;
    } 
    int getCount(int n, int d) {
        int count = 0;
        int start = 10;
        int end = n;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(Sum_digit(mid , d)){
                count = n-mid+1;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return count;
        
        
    }
};