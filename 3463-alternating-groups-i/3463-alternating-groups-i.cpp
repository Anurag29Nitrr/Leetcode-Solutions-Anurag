class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c) {
        int count=0;
        int n=c.size();
        for( int i=0;i<n;i++){
            if(c[i]==c[(i+2)%n] && c[i]!=c[(i+1)%n]){
                count++;
            }
        }
        return count;
    }
};