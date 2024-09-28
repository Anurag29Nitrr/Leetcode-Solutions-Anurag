#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumTotalSum(vector<int>& mh) {
        sort(mh.begin(), mh.end());
        return calculateSum(mh);
    }

private:
    long long calculateSum(vector<int>& mh) {
        long long c = getMaxHeight(mh);
        long long s = 0;
        int i = mh.size() - 1;

        while (i >= 0) {
            c = getMinHeight(c, mh[i]);
            if (c <= 0) return -1;
            s += c;
            c--;
            i--;
        }
        return s;
    }

    long long getMaxHeight(vector<int>& mh) {
        return mh.back();
    }

    long long getMinHeight(long long c, int h) {
        return c < h ? c : h;
    }
};
