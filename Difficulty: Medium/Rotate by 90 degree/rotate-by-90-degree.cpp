class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(i < j){
                    swap(mat[i][j] , mat[j][i]);
                }
            }
        }
        int x = 0 ;
        int y = row-1;
        while(x < y){
            for(int i = 0 ; i < col ; i++){
                swap(mat[x][i], mat[y][i]);
            }
            x++;
            y--;
        }
    }
};
