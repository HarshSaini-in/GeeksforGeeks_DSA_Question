class Solution {
  public:
  
    void merge(vector<int>& arr, int l, int r){
        int mid = l + (r - l)/2;
        int len1 = mid - l + 1;
        int len2 = r - mid;
        
        int *first = new int[len1];
        int *second = new int[len2];
        
        int k = l;
        
        for(int i = 0; i < len1 ; i++){
            first[i] = arr[k++];
        }
        
        k = mid + 1;
        
        for(int i = 0; i < len2 ; i++){
            second[i] = arr[k++];
        }
        
        int i = 0 ;
        int j = 0 ;
        int index = l;
        while(i < len1 && j < len2){
            if(first[i] > second[j]){
                arr[index++] = second[j++];
            }
            else{
                arr[index++] = first[i++];
            }
        }
        while(i < len1){
            arr[index++] = first[i++];
            
        }
        while(j < len2){
            arr[index++] = second[j++];
        }
        
        delete[] first;
        delete[] second;
    }
  
    void mergeSort(vector<int>& arr, int l, int r) {
    
    int mid = l + (r - l)/2;
    // Base Case 
    if(l >= r){
        return;
    }
    
    // left part 
    mergeSort(arr , l , mid);
    
    // right part
    mergeSort(arr , mid + 1 , r);
    
    // merge sort array
    merge(arr , l , r);
        
    }
};