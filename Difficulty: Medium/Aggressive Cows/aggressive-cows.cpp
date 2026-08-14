class Solution {
  public:
  
    bool Is_possible(vector<int> &arr, int k ,int mid , int n){
        int Count_cow = 1;
        int position_cow = arr[0];
        for(int i = 1; i < n ; i++ ){
            if(arr[i] - position_cow >= mid){
                Count_cow++;
                if(k == Count_cow){
                    return true;
                }
                position_cow = arr[i];
            }
        }
        return false;
    } 
  
    int Binary(vector<int> &arr, int k){
        int n = arr.size();
        int start = 0;
        int end = arr[n-1];
        int mid = start + (end - start)/2;
        int ans = 0;
        while(start <= end){
            if(Is_possible(arr , k , mid , n)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans ;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin() , arr.end());
        if(k > arr.size()){
            return -1;
        }
        return Binary(arr , k);
        
    }
};