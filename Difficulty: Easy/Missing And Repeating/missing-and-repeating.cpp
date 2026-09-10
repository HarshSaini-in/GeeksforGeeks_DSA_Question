class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin() , arr.end());
        int b = 0;
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] == arr[i-1]){
                b = arr[i];
                ans.push_back(b);
                break;
            }
        }
        int a = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            a = a ^ arr[i] ^ (i+1);

        }
        a = a ^ b;
        ans.push_back(a);
        return ans;
    }
};