class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& n) {
        int tmp=n.size();
        vector<int> a(tmp, -1);   
        
        for (int i = 0; i <tmp; i++) {
            int x = n[i];
            int c = 0;
            
            while (c <= x) {
                if ((c | (c + 1)) == x) {
                    a[i] = c;
                    break;
                }
                c++;
            }
        }
        
        return a;


        
    }
};