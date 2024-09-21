class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

       int curr=0;
       int cnt=0;
       unordered_map<int,int>mp;
       mp[curr]=1;
       for( int i=0;i<nums.size();i++){
        curr += nums[i]%2;
        if(mp.find(curr - k)!=mp.end()){
            cnt+=mp[curr-k];
        }

        mp[curr]++;
       } 

       return cnt;


        
    }
};