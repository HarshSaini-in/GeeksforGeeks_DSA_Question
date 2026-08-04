bool binarySearch(int* arr, int n, int k) {
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while (start <= end){
        if(arr[mid] == k){
            return true;
        }
        if(arr[mid] > k){
            end = mid - 1;
        }
        else{
            start = mid + 1;
            
        }
        mid = start + (end - start)/2;
    }
    return false;
    
}
