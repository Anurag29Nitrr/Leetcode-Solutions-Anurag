class Solution {
public:
    bool reportSpam(vector<string>& m, vector<string>& b) {
        unordered_set<string>s;
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        int cnt=0;
        for(int i=0;i<m.size();i++){
            if(s.find(m[i])!=s.end()){
                cnt++;
            }
        }
        if(cnt<2) return false;
        else return true;
    }
};