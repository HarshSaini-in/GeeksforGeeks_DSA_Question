class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp;
        vector<int> ans(n+1 , 0);
        for(int x : arr){
            ans[x]++;
        }
        for(int i = 1 ; i <= n ; i++){
            if(ans[i] == 2){
                temp.push_back(i);
            }
        }
        return temp;
    }
};