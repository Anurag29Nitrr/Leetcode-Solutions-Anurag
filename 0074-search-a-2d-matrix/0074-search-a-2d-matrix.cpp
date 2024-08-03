class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        for( int i=0;i<matrix.size();i++){
            int s=matrix[i].size();
            for( int j=0;j<s;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;



        
    }
};