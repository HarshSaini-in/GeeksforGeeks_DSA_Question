class Solution {
  public:
  
    void merge(vector<int>& arr, int l, int r){
        int total = r - l + 1;
        int gap = (total + 1 )/2;
        while(gap > 0){
            int i = l;
            int j = l + gap;
            while(j <= r){
                if(arr[i] > arr[j]){
                    swap(arr[i] , arr[j]);
                }
                i++;
                j++;
                
            }
            if(gap == 1){
                gap = 0;
            }
            else{
                gap = (gap + 1 )/ 2;
            }
            
        }
    }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        int n = arr.size();
        // Base Case 
        if(l >= r){
            return;
        }
        
        int mid = l + (r - l)/2;
        
        // left part 
        mergeSort(arr , l , mid);
        
        // Right part
        mergeSort(arr , mid + 1 , r);
        
        // Merge Array
        merge(arr , l , r);
        
        
    }
};