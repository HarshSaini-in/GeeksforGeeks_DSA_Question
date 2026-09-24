class Solution {
  public:
    double findMedian(vector<int> &arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        double ans = 0.0;
        if(n % 2 == 0){
            ans = double (arr[n/2] + arr[(n/2)-1])/2;
        }
        else{
            ans = arr[n/2];
        }
        return ans;
    }
};