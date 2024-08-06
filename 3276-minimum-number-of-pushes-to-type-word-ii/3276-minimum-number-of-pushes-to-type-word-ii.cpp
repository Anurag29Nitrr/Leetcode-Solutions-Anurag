#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> freqMap;
        for (char c : word) {
            freqMap[c]++;
        }

        vector<int> frequencies;
        for (const auto& entry : freqMap) {
            frequencies.push_back(entry.second);
        }

        sort(frequencies.begin(), frequencies.end(), greater<int>());

        int pushes = 0;
        int pressCount = 1;
        int keyLimit = 8;
        
        for (int freq : frequencies) {
            pushes += freq * pressCount;
            if (--keyLimit == 0) {
                keyLimit = 8;
                pressCount++;
            }
        }

        return pushes;
    }
};
