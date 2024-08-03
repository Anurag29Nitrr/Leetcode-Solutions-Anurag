class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        // unordered_map<int,int>mp;
        // unordered_map<int,int>mp1;
        // for( int i=0;i<arr.size();i++){
        //     mp[target[i]]++;
        //     mp[arr[i]]++;
        // }

        // for( auto it:mp){
        //     if(mp1.find(it.first)==mp1.end() || (mp1[it.first] != it.second)){
        //         return false;
        //     }
        // }
        // return true;

        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        if(target==arr) return true;
        else return false;
        
    }
};