#include<vector>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int count=0;
        vector<int>v;
        for(auto it:mp){
           if(it.second >(n/3)){
            count++;
            v.push_back(it.first);
           }
        }
        return v;
    }
};