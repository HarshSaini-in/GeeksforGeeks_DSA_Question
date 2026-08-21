class Solution {
  public:
    void Solve(vector<int>& arr ,vector<int> &ans , vector<int> output , int i){
        // Base Case
        if(i == arr.size()){
            int sum = 0;
            for(int i = 0 ; i < output.size() ;i++){
                sum += output[i];
            }
            ans.push_back(sum);
            return;
        }
        // include 
        int element = arr[i];
        output.push_back(element);
        Solve(arr, ans , output , i+1);
        output.pop_back();
        // exclude 
        Solve(arr, ans , output , i+1);
        
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;
        vector<int> output;
        int i = 0;
        Solve(arr , ans , output , i);
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};