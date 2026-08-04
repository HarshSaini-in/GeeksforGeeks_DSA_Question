int search(int arr[], int n, int x) {
    // Code here
    int start = 0;
    while(start < n){
        if(x == arr[start]){
            return start;
        }
        start++;
    }
    return -1;
}