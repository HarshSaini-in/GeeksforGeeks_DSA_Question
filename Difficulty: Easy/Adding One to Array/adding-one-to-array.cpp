class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1 ; i >= 0 ; i--){
            if(i == n-1){
                arr[i]++;
            }
            if(arr[i] == 10){
                if(i != 0){
                    arr[i-1]++;
                    arr[i] = 0;
                }
                else{
                    arr.push_back(0);
                    arr[i] = 1;
                }
            }
        }
        return arr;
    }
};