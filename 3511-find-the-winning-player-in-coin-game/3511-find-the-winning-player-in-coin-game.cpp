class Solution {
public:
    string losingPlayer(int x, int y) {

        int r=1;
       while(x>=0 && y>=0){
        x--;
        y-=4;
        r++;
       }
       string ans="";
       if(r%2!=0){
        ans+="Alice";
       }
       else{
        ans+="Bob";
       }
       return ans;
    }

        
    
};