class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        
        int n = a.size();
        int m = b.size();
        vector<int> temp;
        for(int i = 0 ; i < n ; i++){
            temp.push_back(a[i]);
            
        }
        for(int i = 0 ; i < m ; i++){
            temp.push_back(b[i]);
            
        }
        sort(temp.begin() , temp.end());
        a.clear();
        b.clear();
        
        int k = 0;
        for(int i = 0 ; i < n ; i++){
            a.push_back(temp[k]);
            k++;
        }
        for(int i = 0 ; i < m ; i++){
            b.push_back(temp[k]);
            k++;
        }
        temp.clear();    
    }
};