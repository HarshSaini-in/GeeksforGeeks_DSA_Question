class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while(i <= j){
            int a = arr[i] + arr[j];
            if(a > target){
                j--;
            }
            else if( a < target){
                i++;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
        
    }
};