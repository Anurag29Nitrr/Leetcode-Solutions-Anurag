class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {


        unordered_map<string,int>mp;
        string s=s1+" "+s2;

        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                mp[temp]++;
                temp="";

            }
            else{
                temp+=s[i];
            }
        }
         if(temp != ""){
            mp[temp]++;
            temp = "";
        }
        vector<string>ans;

        for( auto it:mp){
            if(it.second==1){
               ans.push_back(it.first);
            }
        }

        return ans;




        
    }
};