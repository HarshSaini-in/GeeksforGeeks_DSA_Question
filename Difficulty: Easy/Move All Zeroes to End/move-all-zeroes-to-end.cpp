class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int i = 0 ; 
        int j = 1;
        while(i < n && j < n){
            if(arr[i] != 0 ){
                i++;
                j++;
            }
            else if(arr[j] == 0){
                j++;
            }
            else{
                swap(arr[i] , arr[j]);
                i++;
                j++;
            }
        }
        
    }
};