class Solution {
public:
    int kthFactor(int n, int k) {

        vector<int> fac;
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 ) {
                fac.push_back(i);
            } 
        }
        if (fac.size() < k)
            return -1;
        else {
            int a = fac[k-1];
            return a;
        }
    }
};