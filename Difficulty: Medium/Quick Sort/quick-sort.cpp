class Solution {
  public:
    

    int partition(vector<int>& arr, int low, int high) {
        int count = 0;
        for(int i = low+1 ; i <= high ; i++){
            if(arr[i] < arr[low]){
                count++;
            }
        }
        int p = count + low;
        swap(arr[low] , arr[p]);
        
        int i = low;
        int j = high;
        while(i < p && j > p){
            while(arr[i] < arr[p]){
                i++;
            }
            while(arr[j] >= arr[p]){
                j--;
            }
            if(i < p && j > p){
                swap(arr[i++] , arr[j--]);
            }
           
        }
        return p;
        
    
    }
    void quickSort(vector<int>& arr, int low, int high) {
        
        // base case
        if( low >= high){
            return; 
        }
        
        int pivot = partition(arr , low , high);
        
    // Recursion
        // left side 
        quickSort(arr , low , pivot-1);
        // Right side
        quickSort(arr , pivot+1 , high);
        
        
        
    }
};