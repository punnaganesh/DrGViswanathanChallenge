class Solution {
public:
       int find_sum(vector<vector<int>>& mat, int r, int c , int k){
        int val=0;
        int rows=mat.size();
        int cols=mat[0].size();
        for(int row=max(0,r-k);row<=min(rows-1,r+k); row++){
            for(int col=max(0,c-k);col<=min(cols-1,c+k);col++){
               
                val+= mat[row][col];
            }
        }
        return val;
       }


    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int rows=mat.size();
        int cols=mat[0].size();
        vector<vector<int>>ans(rows, vector<int>(cols));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
              ans[i][j] = find_sum(mat,i,j,k);
                
            }
        }
        return ans;
        
    }
};