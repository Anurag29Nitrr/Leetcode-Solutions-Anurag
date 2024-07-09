class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        long long totalWaitTime = 0;
        long long currentTime = 0;

        for (int i = 0; i < n; ++i) {
            currentTime = max(currentTime, (long long)customers[i][0]) + customers[i][1];
            totalWaitTime += currentTime - customers[i][0];
        }

        return (double)totalWaitTime / n;
    }
};
