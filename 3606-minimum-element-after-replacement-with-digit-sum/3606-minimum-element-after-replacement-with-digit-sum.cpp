#include <vector>
#include <queue>

class Solution {
public:
    int d(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    
    int minElement(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (int num : nums) {
            minHeap.push(d(num));
        }
        
        return minHeap.top();
    }
};
