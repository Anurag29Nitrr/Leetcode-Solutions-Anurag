class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        vector<int>pref(nums.size());
        int count=0;
        int n=nums.size();
         pref[0]=nums[0];
        for( int i=1;i<n;i++){
            pref[i]=nums[i]+pref[i-1];
        }
        unordered_map<int,int>mp;
        for( int i=0;i<n;i++){
            if(pref[i]==k){
                count++;
            }

            if(mp.find(pref[i]-k)!=mp.end()){
               count+=(mp[pref[i]-k]);
            }

            mp[pref[i]]++;

        }
 return count;
        

        
    }
};