//  Function to find the peak element
int peakElement(int *arr, int n) {
    // code here
    int start = 0 ;
    int end = n -1  ;
    int mid = start + (end - start)/2;
    
    
    while(start <= end){
        if(start == end){
             return start;
        }
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return -1;

}