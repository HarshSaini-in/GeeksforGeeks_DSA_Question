class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> temp;
        int n = arr.size();
        int i = n-1;
        int ans = arr[n-1];
        while(i >= 0){
            if(arr[i] >= ans){
                ans = arr[i];
                temp.push_back(ans);
            }
            i--;
        }
        reverse(temp.begin() , temp.end()); 
        return temp;
        
    }
};