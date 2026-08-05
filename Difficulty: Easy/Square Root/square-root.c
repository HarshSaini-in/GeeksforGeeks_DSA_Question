int floorSqrt(int n) {
    int start = 0 ;
    int end = n ;
    int ans = -1 ;
    long long mid = start + (end -  start)/2;
    while(start <= end){
        long long square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            end = mid - 1;
        }
        else{
            ans = mid ;
            start = mid + 1;
            
        }
        mid = start + (end - start)/2;
        }
    return ans ;
}