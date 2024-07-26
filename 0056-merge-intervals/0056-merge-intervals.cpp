class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ii) {
        vector<vector<int>>ans;
        sort(ii.begin(),ii.end());

        for(int i=0;i<ii.size();i++){
            if(ans.empty()  || ans.back()[1] <ii[i][0]){
                ans.push_back(ii[i]);
            }

            else{
                ans.back()[1]=max(ans.back()[1],ii[i][1]);
            }
          
        
        }

        return ans;

        
    }
};