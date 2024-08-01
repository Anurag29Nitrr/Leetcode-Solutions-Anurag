class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        ans.push_back(vector<int>());


        for( auto it:nums){
            int mao=ans.size();
            for( int i=0;i<mao;i++ ){
                vector<int>temp =ans[i];
                temp.push_back(it);
                ans.push_back(temp);

            }
        }

            return ans;

        




        
    }
};