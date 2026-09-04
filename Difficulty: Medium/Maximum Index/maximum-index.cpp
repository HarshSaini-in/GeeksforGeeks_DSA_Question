// class Solution {
//   public:
//     int maxIndexDiff(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> left;
//         vector<int> right;
//         left[0] = arr[0];
//         right[0] = arr[n-1];
//         for(int i = 1 ; i < n ; i++){
//             left[i] = min(left[i-1],arr[i]);
//         }
//         for(int i = n - 2 ; i >= 0 ; i--){
//             right[i] = max(right[i+1] , arr[i]);
//         }
//         int i = 0 ;
//         int j = 0;
//         int ans = 0;
//         while(j >= i){
//             if(left[i] <= right[j]){
//                 ans = max(ans,j-i);
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return ans;
    
//     }
// };


class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();

        vector<int> left(n);
        vector<int> right(n);

        // left[i] = minimum element from 0 to i
        left[0] = arr[0];

        for(int i = 1; i < n; i++) {
            left[i] = min(left[i - 1], arr[i]);
        }

        // right[i] = maximum element from i to n-1
        right[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], arr[i]);
        }

        int i = 0;
        int j = 0;
        int ans = 0;

        while(i < n && j < n) {

            if(left[i] <= right[j]) {
                ans = max(ans, j - i);
                j++;
            }
            else {
                i++;
            }
        }

        return ans;
    }
};

