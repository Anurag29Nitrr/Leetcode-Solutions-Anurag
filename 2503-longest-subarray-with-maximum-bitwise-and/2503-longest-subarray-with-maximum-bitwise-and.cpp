class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxxi=0;
        int ans=0;
        int curr=0;
        for( int i=0;i<nums.size();i++)
        {
            if(maxxi<nums[i]){
                maxxi=nums[i];
                ans=curr=0;

            }

            if(maxxi==nums[i]){
                curr++;
            }
            else{
                curr=0;
            }
            ans=max(ans,curr);
        }
        return ans;
        
    }
};