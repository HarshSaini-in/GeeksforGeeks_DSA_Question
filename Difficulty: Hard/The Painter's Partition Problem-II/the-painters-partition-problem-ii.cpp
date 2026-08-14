class Solution {
  public:
    bool Is_possible(vector<int>& arr, int k ,long long mid){
        int Painter_Count = 1;
        int board = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(board + arr[i] <= mid){
                board += arr[i];
            }
            else{
                Painter_Count++;
                if(k < Painter_Count || mid < arr[i]){
                    return false;
                }
                board = arr[i];
            }
        }
        return true;
        
    } 
    int Binary(vector<int>& arr, int k){
        int start = 0 ;
        long long sum  = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
        }
        long long end = sum;
        long long mid = start + (end - start)/2;
        int ans = -1;
        if(k == 1){
            return end;
        }
        while(start <= end){
            if(Is_possible(arr , k , mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
        
    }
    int minTime(vector<int>& arr, int k) {
        if(arr.size() < k){
            return -1;
        }
        return Binary(arr , k);
        
    }
};