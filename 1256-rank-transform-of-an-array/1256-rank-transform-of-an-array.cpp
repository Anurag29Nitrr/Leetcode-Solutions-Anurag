class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Step 1: Copy the original array
        vector<int> v = arr;
        
        // Step 2: Sort the copied array
        sort(v.begin(), v.end());
        
        // Step 3: Create a map to store the rank of each unique element
        unordered_map<int, int> mp;
        int rank = 1;
        
        // Step 4: Assign ranks to unique elements
        for(int i = 0; i < v.size(); i++) {
            if(mp.find(v[i]) == mp.end()) { // If element is not already in the map
                mp[v[i]] = rank++;
            }
        }
        
        // Step 5: Build the result array by replacing each element with its rank
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++) {
            ans.push_back(mp[arr[i]]);
        }

        return ans;
    }
};
