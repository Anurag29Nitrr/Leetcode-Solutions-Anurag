class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        while(r<n){ 
            if(mp.count(s[r])){ 
                //if in map
                if(mp[s[r]]>=l)
                l=mp[s[r]]+1;
            }
          maxlen=max(maxlen,r-l+1);
          mp[s[r]]=r;
          r++;

        }
      return maxlen;   
    }
};