class Solution {
  public:
    void sort012(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int Zero = 0;
        int one = 0 ;
        int two = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0){
                Zero++;
            }
            else if(arr[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
        // ans.push_back(Zero);
        // ans.push_back(one);
        // ans.push_back(two);
        
        int i = 0;
        while(Zero){
            ans.push_back(0);
            Zero--;
        }
        while(one){
            ans.push_back(1);
            one--;
        }
        while(two){
            ans.push_back(2);
            two--;
        }   
        arr = ans;
    }
};