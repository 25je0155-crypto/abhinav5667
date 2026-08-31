class Solution {
public:
double pow(double x,int M){
    if(M==0){
        return 1;
    }
    
        double half=pow(x,M/2);
        if((M%2)!=0){
   return (x*half*half);
        }
       else {
           return (half*half);
        }
    
  }
    double myPow(double x, int n) {
        long long M=n;
         
        if(M<0){
            x=(1/x);
            M=-M;
        }
      return  pow(x,M);
        
    }
};