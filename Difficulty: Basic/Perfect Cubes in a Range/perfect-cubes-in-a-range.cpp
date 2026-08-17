class Solution {
  public:
    vector<int> properCubes(int a, int b) {
        vector<int> ans;
        int i = 0;
        while(i*i*i <= b){
            int x = i*i*i ;
            if(a <= x && x <= b){
                ans.push_back(x);
            }
            i++;
        }
        if(ans.size() == 0){
            ans.push_back(-1);
        }
        return ans;
    }
};