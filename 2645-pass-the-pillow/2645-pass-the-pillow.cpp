class Solution {
public:
    int passThePillow(int n, int time) {
        
        int rem=time%(n-1);
        int round=time/(n-1);
        if(round %2==0){
             return rem+1;
        }
        else{
            return n-rem;
        }
    }
};