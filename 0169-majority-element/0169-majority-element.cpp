class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        for( int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for( auto it=mp.begin();it!=mp.end();it++){
            if(it->second >n/2){
                count=it->first;
                break;
            }
        }
        return count;
    }
};