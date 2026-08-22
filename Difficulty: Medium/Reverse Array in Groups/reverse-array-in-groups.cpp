class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();
        if(n < k){
            reverse(arr.begin() , arr.end());
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if((i*k + k) < n ){
                reverse(arr.begin() + i * k,
                arr.begin() + (i + 1) * k);
            }
            else{
                reverse(arr.begin()+i*k , arr.end());
                break;
            }
            
        }
    }
};
