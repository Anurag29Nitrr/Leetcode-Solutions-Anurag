#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool b(int n, int p) {
        return (n & (1 << p)) != 0;
    }

    int c(int n, int p) {
        return n & ~(1 << p);
    }

    int m(const set<int>& s) {
        return s.empty() ? -1 : *s.begin();
    }

public:
    vector<int> minBitwiseArray(vector<int>& n) {
        vector<int> a;
        
        for (int x : n) {
            set<int> s;
            int i = 0;

            while (i < 32) {
                if (b(x, i)) {
                    int y = c(x, i);
                    if ((y | (y + 1)) == x) {
                        s.insert(y);
                    }
                }
                i++;
            }

            a.push_back(m(s));
        }

        return a;
    }
};

