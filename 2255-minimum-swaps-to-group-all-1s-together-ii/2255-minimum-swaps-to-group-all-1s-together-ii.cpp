class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
    int n=nums.size();

     if(total == 0 || total ==n) return 0;
    // int n=nums.size();
int curr=0;
    //int maxi=0;
    for( int i=0;i<total;i++){
        curr+=nums[i];

    }
    int maxi=curr;


     for(int i=0;i<n;i++){
        curr-=nums[i];
        curr+=nums[(i+total)%n];
        maxi=max(maxi,curr);
     }

     return total-maxi;
        
    }
};