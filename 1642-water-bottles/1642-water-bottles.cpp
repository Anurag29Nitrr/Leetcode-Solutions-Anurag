class Solution {
public:
    int numWaterBottles(int N, int E) {
      int total = N; 

    while (N >= E) {
        int exchanged = N / E;  
        total += exchanged;  
        N = exchanged + N % E;  
    }

    return total;
       

        
    }
};