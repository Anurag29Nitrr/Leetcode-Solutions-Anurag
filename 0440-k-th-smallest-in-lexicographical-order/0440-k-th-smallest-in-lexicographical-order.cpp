class Solution {
public:
    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;

        while (k > 0) {
            int step = countSteps(n, curr, curr + 1);
            if (step <= k) {
                curr++;
                k -= step;
            } else {
                curr *= 10;
                k--;
            }
        }

        return curr;
    }

    private:
    int countSteps(int n, long prefix1, long prefix2) {
        int steps = 0;
        while (prefix1 <= n) {
            steps += min((long)(n + 1), prefix2) - prefix1;
            prefix1 *= 10;
            prefix2 *= 10;
        }
        return steps;
    }
};
























// class Solution {

//     void dfs(int curr,int &k,vector<int> &ans){
//         if (k == 0) return;
//         if(curr>k) return ;
//         k--;
//         ans.push_back(curr);
//         for(int i=0;i<10;i++){
//             dfs(curr*10 +i,k,ans);
//         }
//     }
// public:
//     int findKthNumber(int n, int k) {

//         vector<int>ans;
//         for( int i=1;i<=9;i++){
//             dfs(n,k,ans);
//         }
//         return ans[k-1];
        
//     }
// };
// class Solution {
// public:
//     int findKthNumber(int n, int k) {
//         vector<int> numbers;

//         // Collect all numbers from 1 to n
//         for (int i = 1; i <= n; i++) {
//             numbers.push_back(i);
//         }

//         // Sort numbers lexicographically
//         sort(numbers.begin(), numbers.end(), [](int a, int b) {
//             return to_string(a) < to_string(b);
//         });

//         // Return the k-th smallest number
//         return numbers[k - 1];
//     }
// };
