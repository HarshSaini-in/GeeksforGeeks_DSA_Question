class Solution {
  public:
  
    bool Is_Possible(vector<int> &arr, int k , int mid){
        int Cow = 1;
        int position = arr[0];
        for (int i = 0 ; i < arr.size() ; i++){
            if(arr[i] - position >= mid){
                
                Cow++;
                if(Cow == k){
                    return true;
                }
                position = arr[i];
            }
        }
        return false;
    }
     
    
    int Binary(vector<int> &arr, int k){
        sort(arr.begin(),arr.end());
        int start = 0 ;
        int maxi = -1;
        for (int i = 0 ; i < arr.size() ; i++){
            maxi = max(maxi , arr[i]);
        }
        int end = maxi;
        int ans = -1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if(Is_Possible(arr , k , mid)){
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
        if(arr.size() < k){
            return -1;
        }
        return Binary(arr , k);
        
    }
};