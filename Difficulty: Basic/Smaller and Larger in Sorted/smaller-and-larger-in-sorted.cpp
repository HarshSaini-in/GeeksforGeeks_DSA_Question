class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        vector<int> ans;
        int smaller = 0;
        int greater = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] <= target){
                smaller++;
            }
            if(arr[i] >= target){
                greater++;
            }
        }
        ans.push_back(smaller);
        ans.push_back(greater);
        return ans;
    }
};