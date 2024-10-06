#include <vector>
#include <deque>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    pair<unordered_map<int, vector<int>>, unordered_map<int, vector<int>>> buildGraph(const vector<vector<int>>& inv) {
        unordered_map<int, vector<int>> g, r;
        for (const auto& e : inv) {
            g[e[0]].push_back(e[1]);
            r[e[1]].push_back(e[0]);
        }
        return make_pair(g, r);
    }

    unordered_set<int> bfs(int start, const unordered_map<int, vector<int>>& g) {
        unordered_set<int> s;
        deque<int> q = {start};
        s.insert(start);
        
        while (!q.empty()) {
            int m = q.front();
            q.pop_front();
            if (g.find(m) != g.end()) {
                for (int nxt : g.at(m)) {
                    if (s.find(nxt) == s.end()) {
                        s.insert(nxt);
                        q.push_back(nxt);
                    }
                }
            }
        }
        return s;
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& inv) {
        auto [g, r] = buildGraph(inv);
        unordered_set<int> s = bfs(k, g);

        for (int m : s) {
            if (r.find(m) != r.end()) {
                for (int invoker : r[m]) {
                    if (s.find(invoker) == s.end()) {
                        vector<int> res(n);
                        for (int i = 0; i < n; ++i) {
                            res[i] = i;
                        }
                        return res;
                    }
                }
            }
        }

        vector<int> res;
        for (int x = 0; x < n; ++x) {
            if (s.find(x) == s.end()) {
                res.push_back(x);
            }
        }
        return res;
    }
};
