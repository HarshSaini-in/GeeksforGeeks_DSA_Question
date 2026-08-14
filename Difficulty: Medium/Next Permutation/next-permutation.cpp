class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        bool flag = false;
        for(int j = n - 1 ; j > 0 ; j--){
            if(arr[j-1] < arr[j]){
                int temp = j-1;
                for(int i = n-1 ; i >= j ; i-- ){
                    if(arr[i] > arr[temp]){
                        swap(arr[i] , arr[temp]);
                        flag = true;
                        reverse(arr.begin( ) + j , arr.end());
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            reverse(arr.begin() , arr.end());
        }
    }
};