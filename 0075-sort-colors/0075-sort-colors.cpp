class Solution {
public:
    void sortColors(vector<int>& nums) {
      int count=0;
      int count2=0;
      int count3=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count++;
        }
        if(nums[i]==1){
            count2++;
        }
        if(nums[i]==2){
            count3++;
        }
      }
      int n=nums.size();
      for(int i=0;i<count;i++){
        nums[i]=0;
      }
      for(int i=count;i<count+count2;i++){
        nums[i]=1;
      }
      for(int i=count+count2;i<n;i++){
        nums[i]=2;
      }
      
      for(int i=0;i<nums.size();i++){
        cout<<nums[i];
      }
    }
};