class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int ans = -1;
        int temp = -1;
        int maxi = -1;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > maxi){
                temp = maxi;
                maxi = arr[i];
            }
            if(temp <= arr[i] && arr[i] < maxi){
                temp = arr[i];
            }
        }
        return temp;
        
    }
};