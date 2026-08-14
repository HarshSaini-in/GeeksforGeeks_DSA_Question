class Solution {
  public:
  void get_all_Subsets(vector<int>& arr , int i ,vector<int> output, vector<vector<int>> &ans){
    //   Base case
    if(i == arr.size()){
        ans.push_back(output);
        return;
    }
    // include 
    int element = arr[i];
    output.push_back(element);
    get_all_Subsets(arr ,i + 1 , output , ans);
    output.pop_back();
    get_all_Subsets(arr ,i + 1 , output , ans);
    
  }
  
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0 ;
        get_all_Subsets(arr ,i , output , ans);
        
        return ans;
    }
};