#include <bitset>

class Solution {
public:
    int minChanges(int n, int k) {
        string temp=bitset<32>(n).to_string();
                string temp1=bitset<32>(k).to_string();

                int count=0;
                int count1=0;
                for( int i=0;i<temp.size();i++){
                    if(temp[i]=='0' && temp1[i]=='1'){
                        count1++;
                    }
                   else if(temp[i]=='1' && temp1[i]=='0'){
                    count++;
                   }
                }
        if(count1!=0) return -1;
        else return count;
    }
};