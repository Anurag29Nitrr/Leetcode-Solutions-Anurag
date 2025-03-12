class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int maxarea=0;
        while(l<r){
            maxarea=max(maxarea,(r-l)*min(h[l],h[r]));

            if(h[l]<h[r]){
                l++;


            }
            else{
                r--;
            }
        }

        return maxarea;


        
    }
};