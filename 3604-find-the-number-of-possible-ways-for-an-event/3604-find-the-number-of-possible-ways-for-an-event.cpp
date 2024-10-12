#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    int numberOfWays(int n, int x, int y) {
        vector<vector<int>> comb = a(x);
        vector<vector<int>> stir = b(n, x);
        vector<int> fact = f(x);

        int res = 0;
        for (int k = 1; k <= x; ++k) {
            long long p = d(y, k);
            long long temp = (1LL * comb[x][k] * stir[n][k]) % MOD;
            temp = (temp * fact[k]) % MOD;
            temp = (temp * p) % MOD;
            res = (res + temp) % MOD;
        }

        return res;
    }

private:
    vector<vector<int>> a(int x) {
        vector<vector<int>> c(x + 1, vector<int>(x + 1, 0));
        for (int i = 0; i <= x; ++i) {
            c[i][0] = 1;
            for (int j = 1; j <= i; ++j) {
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % MOD;
            }
        }
        return c;
    }

    vector<vector<int>> b(int n, int x) {
        vector<vector<int>> s(n + 1, vector<int>(x + 1, 0));
        s[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= x; ++j) {
                long long firstPart = (1LL * j * s[i - 1][j]) % MOD;
                long long secondPart = s[i - 1][j - 1];
                s[i][j] = (firstPart + secondPart) % MOD;
            }
        }
        return s;
    }

    vector<int> f(int x) { // Renamed from c to f to avoid conflict
        vector<int> fact(x + 1, 1);
        for (int i = 1; i <= x; ++i) {
            fact[i] = (1LL * fact[i - 1] * i) % MOD;
        }
        return fact;
    }

    long long d(int b, int e) {
        long long r = 1;
        long long base = b;
        while (e > 0) {
            if (e & 1) {
                r = (r * base) % MOD;
            }
            base = (base * base) % MOD;
            e >>= 1; // Divide e by 2
        }
        return r;
    }
};
