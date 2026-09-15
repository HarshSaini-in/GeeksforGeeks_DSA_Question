class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n+2 , 0);
        for(int x : arr){
            ans[x]++;
        }
        int missing = -1;
        for(int i = 1 ; i <= arr.size()+1 ; i++){
            if(ans[i] == 0){
                missing = i;
            }
        }
        return missing;
    }    
};