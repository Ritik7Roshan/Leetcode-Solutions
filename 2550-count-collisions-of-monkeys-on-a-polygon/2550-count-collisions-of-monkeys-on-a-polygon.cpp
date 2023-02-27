class Solution {
public:
    long long power(long long x, long long y, long long p)
    {
        //Initialise answer
        long long res=1;
        // check till power becomes zero
        while(y>0)
        {
            //If y is odd multiply x with result 
            if(y%2==1)
            {
                res=(res*x)%p;
            }
            //y=y/2
            y=y>>1;
            
            //change x to x^2
            x=(x*x)%p;
        }
        return res%p;
    }
    int monkeyMove(int n) {
        long long ans=power(2,n,1000000007);
        ans=(ans+1000000007-2)%1000000007;
        return (int)ans;
    }
};