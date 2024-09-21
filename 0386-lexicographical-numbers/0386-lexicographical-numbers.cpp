class Solution {


      void dfs(int curr,int &n,vector<int>&ans){
         if(curr>n) return;
        ans.push_back(curr);
         for( int j=0;j<=9;j++){
            dfs(curr*10 +j,n,ans);
         }

        // return ans;
      }
public:
    vector<int> lexicalOrder(int n) {

        vector<int>ans;
        for( int i=1;i<=9;i++){

            dfs(i,n,ans);

        }
        return ans;
        
    }
};