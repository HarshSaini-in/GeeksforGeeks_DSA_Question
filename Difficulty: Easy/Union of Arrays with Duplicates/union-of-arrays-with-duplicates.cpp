class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        vector<int> ans;
        int n = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if(a[i] < b[j]){
                if(ans.empty() || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }
            else if(a[i] > b[j]){
                if(ans.empty() || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
            else{
                if(ans.empty() || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        while(i < n ){
            if(ans.empty() || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;            
        }
        while(j < m ){
            if(ans.empty() || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;            
        }  

        return ans;
        
    }
};