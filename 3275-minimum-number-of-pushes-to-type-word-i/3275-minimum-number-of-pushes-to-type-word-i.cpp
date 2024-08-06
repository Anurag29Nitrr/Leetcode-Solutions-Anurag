class Solution {
public:
    int minimumPushes(string word) {
         

         int cnt=0;
         int g=8;
         int pc=1;
         int temp=0;



         for( int i=0;i<word.size();i++){
             cnt+=(pc);
            if(--g==0)
            {
                g=8;
                pc++;

            }
           // cnt+=(pc);
          //  g--;
}
return cnt;
    }
};