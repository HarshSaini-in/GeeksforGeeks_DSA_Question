class Solution {
  public:
    void Solve(string &s ,vector<string> &ans , string output , int i ){
        if( i == s.size() ){
            ans.push_back(output);
            return;
        }
        // include 
        output.push_back(s[i]);
        Solve(s , ans , output , i+1);
        // backtracking
        output.pop_back();
        // Exclude
        Solve(s , ans , output , i+1);
    }
    vector<string> powerSet(string &s) {
        vector<string> ans;
        string output = "";
        int i = 0 ; 
        Solve(s , ans , output ,i);
        sort(ans.begin() , ans.end());
        return ans;
    }
};