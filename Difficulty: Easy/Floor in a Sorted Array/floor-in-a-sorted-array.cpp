class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int ans = -1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] <= x){
                ans = i;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
