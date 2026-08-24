class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int len1 = a.size();
        int len2 = b.size();
        vector<int> ans;
        int i = 0 ;
        int j = 0 ;
        while(i < len1 && j < len2){
            if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i < len1){
            ans.push_back(a[i]);
            i++;
        }
        while(j < len2){
            ans.push_back(b[j]);
            j++;
        }
        return ans[k-1];
        
        
    }
};