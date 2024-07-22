class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {


       vector<pair<int,string>>ans;
       for( int i=0;i<names.size();i++){
        ans.emplace_back(heights[i],names[i]);

       }

       sort(ans.begin(),ans.end(),greater<pair<int,string>>());
       vector<string>temp;
       for( auto it:ans){
          temp.push_back(it.second);
       }
         return temp;
    }
};