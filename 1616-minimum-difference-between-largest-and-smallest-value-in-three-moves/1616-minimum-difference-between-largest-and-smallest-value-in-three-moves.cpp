class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size();
       int ans=0;
       if(n<=4) ans=0;
       else{
       int a=nums[n-1]-nums[3];
       int b=nums[n-4]-nums[0];
       int c=nums[n-2]-nums[2];
       int d=nums[n-3]-nums[1];

       int f=min(a,b);
       int g=min(c,d);
       int h=min(f,g);
       ans=h;
       }
       return ans;
       



    
    }
};