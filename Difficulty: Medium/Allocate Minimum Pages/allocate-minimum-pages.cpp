class Solution {
  public:
      bool Is_Possible(vector<int>& nums, int k,long long mid){
        int Count = 1;
        int NumberCount = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            if(NumberCount + nums[i] <= mid){
                NumberCount += nums[i];
            }
            else{
                Count++;
                if(Count > k || nums[i]>mid){
                    return false;
                }
                
                NumberCount = nums[i]; 
                
                
            }
        }
        return true;
    }
    int Binary(vector<int>& nums, int k){
        
        int s = 0;
        long long sum = 0;
        for (int i = 0 ; i < nums.size() ; i++  ){
            sum += nums[i];
        }
        long long e = sum ;
        long long mid = s + (e - s)/2;
        int ans = -1;
        if(k==1){
            return e;
        }
        while( s <= e){
            if(Is_Possible(nums,k,mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;

        }

        return ans;
    }
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size()){
            return -1;
        }
        return Binary(arr , k);
        
        
    }
};