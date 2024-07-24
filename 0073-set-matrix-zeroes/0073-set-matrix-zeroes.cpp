class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();
     int flag =0;
    //  vector<vector<int>> temp(n,vector<int>(m,1));
        vector<int> row(n,1),col(m,1);
        //int count=0;
        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                    // temp[i][0]=0;
                    // temp[0][j]=0;
                }
            }
        }
        // for(auto i:temp)
        // {
        //     for(auto j:i)
        //     {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(col[j]==0 || row[i]==0){
                    matrix[i][j]=0;
                }
            }
        }
        return matrix;
        
    }
};