class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int perfix = 1;
        int suffix = 1;
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(perfix == 0) perfix = 1;
            if(suffix == 0) suffix = 1;
            perfix *= arr[i];
            suffix *= arr[n-i-1];
            ans = max(ans , max(perfix , suffix));
        }
        return ans;
    }
};