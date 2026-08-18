class Solution {
  public:
    int factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return (n * factorial(n-1));
    }
    void Solve(int n , int k , string &output ,string s){
        if(n == 0){
            return;
        }
        int block = factorial(n-1);
        int index =(k - 1) / block ;
        k = k - (index * block);
        output.push_back(s[index]);
        s.erase(index , 1);
        Solve(n-1 , k , output , s);
    }
    string kthPermutation(int n, int k) {
        string s = "";
        for(int i = 1 ; i <= n ; i++){
            s.push_back(i + '0');
        }
        string output = "";
        Solve(n , k , output ,s);
        return output;
        
    }
};