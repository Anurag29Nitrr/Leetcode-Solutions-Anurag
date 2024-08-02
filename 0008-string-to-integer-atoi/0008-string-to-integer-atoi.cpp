class Solution {
public:
    int myAtoi(string s) {

        if(s.size()==0){
            return 0;
        }
int n=s.size();
        int i=0;
        long ans=0;
        int sign=1;
        while(i<n && s[i]==' '){
            i++; 
        }

        s=s.substr(i);

        if(s[0]=='-'){ sign=-1;
        
        }
         i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
         int maxx=INT_MAX;
         int minn=INT_MIN;
        while(i<n){


            if(s[0]==' '  || !isdigit(s[i])) break;
            ans=ans*10 +(s[i]-'0');

            if(sign == -1  && -1*ans<minn) return minn;
            if(sign ==1  && ans>maxx) return maxx;
            i++;

        }

        return int(sign *ans);






        
    
    
        
    }
};