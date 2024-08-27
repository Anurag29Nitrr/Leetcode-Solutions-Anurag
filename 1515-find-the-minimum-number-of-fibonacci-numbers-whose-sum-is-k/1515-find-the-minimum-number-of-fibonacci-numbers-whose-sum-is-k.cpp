class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fibs = {1, 1};
        int i = 2;
        while (fibs.back() < k) {
            fibs.push_back(fibs[i - 1] + fibs[i - 2]);
            i++;
        }
        
        int count = 0;
        while (k > 0) {
            auto it = upper_bound(fibs.begin(), fibs.end(), k);
            it--;
            k -= *it;
            count++;
        }
        
        return count;
    }
};