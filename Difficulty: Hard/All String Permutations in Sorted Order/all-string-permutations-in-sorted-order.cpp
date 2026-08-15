class Solution {
  public:
    void Solve(string s, vector<string> &ans , string output, int i ){
        // base case 
        if(i == s.length()){
            ans.push_back(output);
            return;
        }
        for(int j = i ; j < s.size() ; j++){
            swap(s[i] , s[j]);
            output = s;
            Solve(s , ans , output , i+1);
            
        }
    }
    vector<string> permutation(string s) {
        vector<string> ans;
        string output = "";
        int i = 0;
        Solve(s , ans , output , i);
        sort(ans.begin() , ans.end());
        return ans;
    }
};