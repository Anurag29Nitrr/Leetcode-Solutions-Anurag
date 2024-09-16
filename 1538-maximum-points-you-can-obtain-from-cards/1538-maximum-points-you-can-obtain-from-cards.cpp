class Solution {
public:
    int maxScore(vector<int>& c, int k) {

        int leftsum=0;
        int maxsum=0;
        for( int i=0;i<k;i++){
            leftsum+=c[i];
        }

        maxsum=leftsum;
        int r=c.size() -1;
        int rightsum=0;
        for( int i=k-1;i>=0;i--){
            leftsum-=c[i];
            rightsum=rightsum+c[r];
            
            maxsum=max(maxsum,leftsum+rightsum);
            r--;
        }

        return maxsum;
        
    }
};