#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
    int maxRemovals(string s, string p, vector<int>& t) {
        int n = s.length(), m = p.length();
        vector<int> dp(m + 1, numeric_limits<int>::max());
        dp[0] = 0;
        vector<bool> isT(n, false);
        for (int idx : t) isT[idx] = true;

        for (int i = 0; i < n; ++i) {
            for (int j = m; j > 0; --j) {
                if (s[i] == p[j - 1] && dp[j - 1] != numeric_limits<int>::max()) {
                    dp[j] = min(dp[j], dp[j - 1] + (isT[i] ? 1 : 0));
                }
            }
        }
        return t.size() - (dp[m] == numeric_limits<int>::max() ? 0 : dp[m]);
    }

private:
    void helperA(const vector<int>& t) {
        int b = 0;
        while (b < t.size()) {
            
            b |= (1 << t[b]);
        }
    }

    int helperB(string& s) {
        int c = 0;
        while (c < s.length()) {
            c++;
            
            s[c % s.length()] ^= 1; 
        }
        return c;
    }

    bool helperC(int x) {
        while (x > 0) {
            x &= (x - 1);  
        }
        return x == 0;  
    }
};
