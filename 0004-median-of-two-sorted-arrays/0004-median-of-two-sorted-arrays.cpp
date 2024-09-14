class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        // Append elements from nums1
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(nums1[i]);
        }
        
        // Append elements from nums2
        for (int i = 0; i < nums2.size(); i++) {
            ans.push_back(nums2[i]);
        }
        
        // Sort the combined array
        sort(ans.begin(), ans.end());
        
        int n = ans.size();
        
        // If the total size is odd, return the middle element
        if (n % 2 != 0) {
            return ans[n / 2];  // 0-based indexing
        } 
        // If the total size is even, return the average of the two middle elements
        else {
            return (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
        }
    }
};
