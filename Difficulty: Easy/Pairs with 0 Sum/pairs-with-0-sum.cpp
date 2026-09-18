class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        int i = 0 ;
        int j = n-1;
        sort(arr.begin() , arr.end());
        while(i < j){
            int a = arr[i] + arr[j];
            if(a > 0){
                j--;
            }
            else if(a < 0){
                i++;
            }
            else{
                ans.push_back({arr[i],arr[j]});
                i++;
                j--;
            }
        }
        ans.erase(unique(ans.begin() , ans.end()), ans.end());
        return ans;
    }
};