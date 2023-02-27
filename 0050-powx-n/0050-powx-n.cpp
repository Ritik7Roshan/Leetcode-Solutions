class Solution {
public:
    double myPow(double x, int n) {
        if(n>=0)
            return positivepower(x,n);
        else 
            return negativepower(x,n);
    }
    
    double positivepower(double x, int n)
    {
        if(n==0) return 1;
        
        double smalloutput=positivepower(x,n/2);
        if(n%2==0)
        {
          return smalloutput*smalloutput;
        }
        else return x*smalloutput*smalloutput;
        
    }
    
    double negativepower(double x, int n)
    {
        if(n==-1) return 1/x;
         double smalloutput = negativepower(x,n/2);
        if(n%2==0) return smalloutput*smalloutput;
        else 
            return (1/x)*smalloutput*smalloutput;
    }
};