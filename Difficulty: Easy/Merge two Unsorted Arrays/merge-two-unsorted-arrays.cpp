class Solution {
  public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        
        
        int i = 0;
        int j = 0;
        // int k = 0;
        int n = a.size();
        int m = b.size();
        vector<int>  temp;
        while(i < n && j < m){
            if(a[i] < b[j]){
                temp.push_back(a[i++]);
            }
            else{
                temp.push_back(b[j++]);
            }
        }
        while(i < n){
           temp.push_back(a[i++]);
        }
        while(j < m){
            temp.push_back(b[j++]);
        }
        
        return temp;
    }
};
