class Solution {
  public:
    void rearrange(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int minidx = 0 ; 
        int maxidx = n - 1;
        int maxElement = arr[n-1] + 1;
        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0){
                arr[i] = arr[i] + (arr[maxidx] % maxElement)*maxElement;
                maxidx--;
            }
            else{
                arr[i] = arr[i] + (arr[minidx] % maxElement)*maxElement;
                minidx++;
            }
        }
        for(int i = 0 ; i < n ; i++){
            arr[i] = arr[i] / maxElement;
        }
      
        
    }
};