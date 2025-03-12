class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int k=0;
        for(int i:nums){
            mp[i]++;
            if(mp[i] <=2){
                nums[k]=i;
                k++;
            }
        }
        return k;
        
    }
};