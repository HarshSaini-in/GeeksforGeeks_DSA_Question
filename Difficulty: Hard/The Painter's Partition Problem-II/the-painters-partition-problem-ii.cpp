class Solution {
  public:
    
    bool Is_possible(vector<int>& arr, int k ,long long mid){
        int count = 0;
        int painter = 1;
        for (int i = 0 ; i < arr.size() ; i++){
            if(count + arr[i] <= mid){
                count += arr[i];
            }
            else{
                painter++;
                if(painter > k || mid < arr[i]){
                    return false;
                }
                count = arr[i];
            }
        }
        return true;
    }
  
  
    int Binary(vector<int>& arr, int k){
        int start =  0 ;
        long long sum = 0 ; 
        for (int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
        }
        long long end = sum ;
        int ans = -1;
        long long mid = start + (end - start)/2;
        while(start <= end){
            if (Is_possible(arr , k , mid)){
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
        if(k > arr.size()){
            return -1;
        }
        return Binary(arr , k);
        
    }
};