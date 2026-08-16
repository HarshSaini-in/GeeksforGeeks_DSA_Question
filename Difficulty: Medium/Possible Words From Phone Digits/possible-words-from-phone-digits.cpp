class Solution {
  public:
    void Solve(vector<int> &nums , vector<string> &ans , string mapping[10],int i ,string output){
        // Base Case
        
        if(i == nums.size()){
            ans.push_back(output);
            return;
        }
        
        if(nums[i] == 1 || nums[i] == 0 ){
            Solve(nums ,ans ,mapping , i + 1 , output);
            return;
        } 
        
        int element = nums[i];
        string value = mapping[element];
        
        for(int j = 0 ; j < value.size() ; j++){
            output.push_back(value[j]);
            Solve(nums ,ans ,mapping , i + 1 , output);
            output.pop_back();
        }
        
    }
    vector<string> possibleWords(vector<int> &arr) {
        vector<string> ans;
        int i = 0;
        string output = "";
        string mapping[10] = {"","","abc","def","ghi","jkl",
                              "mno","pqrs","tuv","wxyz"};
        Solve(arr , ans , mapping , i , output);
        return ans;
        
    }
};