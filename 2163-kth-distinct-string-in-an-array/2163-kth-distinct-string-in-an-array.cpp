class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string hehe = "";
        unordered_map<string, int> mp;
        
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        vector<string> res;
        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] == 1) {
                res.push_back(arr[i]);
            }
        }
        
        if (k > res.size()) {
            return hehe;
        } else {
            hehe = res[k - 1];
            return hehe;
        }
    }
};
