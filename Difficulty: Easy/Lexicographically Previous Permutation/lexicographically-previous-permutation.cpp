class Solution {
  public:
    string prevPermutation(string &s) {
        bool flag = false;
        int n = s.size();
        for(int i = n - 1 ; i > 0 ; i--){
            if(s[i-1] > s[i]){
                for(int j = n-1 ; j >= i ; j--){
                    if(s[i-1] > s[j]){
                        swap(s[i-1] , s[j]);
                        flag = true;
                        reverse(s.begin() + i , s.end());
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag || s[0] == '0'){
            return "-1";
        }
        return s;
    }
};