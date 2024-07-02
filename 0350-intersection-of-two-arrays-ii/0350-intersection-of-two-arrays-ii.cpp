class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans;
        // for(int i=0;i<nums1.size();i++){
        //     for( int j=0;j<nums2.size();j++){
        //         if(nums1[i]== nums2[j]){
        //             ans.push_back(nums1[i]);
        //             nums2[j]=INT_MIN;
        //             continue;
        //                            }
        //     }
        // }
        // return ans;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;

        
    }
};