class Solution {
public:


   double f(double x,int n){
    if(n==0)return 1;
    else
    return x*f(x,n-1);
   }
    double myPow(double x, int n) {

        // if(n==INT_MIN){

        // }
        double num=1;
        if(n>=0){
            num=f(x,n);

        }
        else{
           n*= -1;
           num=f(x,n);
           num=(1/num);

        }

        return num;
    }


    
};