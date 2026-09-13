class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(); //rows
        int m=matrix[0].size(); //cols
        for(int i=1;i<n;i++){
            for(int j=0;j<m-1;j++){
                if(matrix[i-1][j]!=matrix[i][j+1]){
                    return false;
                }
            }
        }
    return true;
    }
};