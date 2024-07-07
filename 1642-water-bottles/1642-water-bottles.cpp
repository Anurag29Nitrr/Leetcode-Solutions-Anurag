class Solution {
public:
    int numWaterBottles(int N, int E) {
        int ans= N;
        while(N>E){
            int mao= N/E;
            ans+=mao;
             N= mao +(N%E);
        }
        return ans;
        
    }
};