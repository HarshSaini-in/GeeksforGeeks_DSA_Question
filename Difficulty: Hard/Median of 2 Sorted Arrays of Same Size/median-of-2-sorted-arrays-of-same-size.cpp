class Solution {
  public:
    void merge(vector<int>& a, vector<int>& b , vector<int> &temp){
        int n = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if(a[i] < b[j]){
                temp.push_back(a[i]);
                i++;
            }
            else{
                temp.push_back(b[j]);
                j++;
            }
        }
        while(i < n){
            temp.push_back(a[i]);
            i++;
        }
        while(j < m){
            temp.push_back(b[j]);
            j++;
        }
                
    }
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> temp ;
        merge(a , b , temp);
        double ans = 0.0;
        int n = temp.size();
        if(n % 2 == 0){
            ans = double (temp[n/2] + temp[(n/2)-1])/2;
        }
        else{
            ans = temp[n/2];
        }
        return ans;        
    }
};