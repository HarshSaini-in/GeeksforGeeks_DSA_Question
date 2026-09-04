class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> temp;
        int len1 = a.size();
        int len2 = b.size();
        for(int i = 0 ; i < len1 ; i++){
            temp.insert(a[i]);
        }
        for(int i = 0 ; i < len2 ; i++){
            temp.insert(b[i]);
        }
        vector<int> ans;
        
        for(auto it : temp){
            ans.push_back(it);
        }
        return ans;
    }
};