class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int b=0;
        int maxi=0;
        mp[0]=-1;
        for( int i=0;i<nums.size();i++){
            if(nums[i]==1){
                b++;
            }
            else{
                b--;
            }

            if(mp.find(b)!=mp.end()){
                maxi=max(maxi,i-mp[b]);
            }
else{
        mp[b]=i;
}
        }
        
        
return maxi;
        }
    
};