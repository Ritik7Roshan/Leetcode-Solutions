class Solution {
public:
    const int mod=1e9+7;
    
    int recursion(int N, int& K, int Target, vector<vector<int>>&dp){
        
         // target sum zero and dice is also zero that is 0 dice 0 sum so always have only 1 way
        if(Target==0 and N==0){
            return dp[N][Target]=1;  
        }
        
        // target sum zero and dice is not zero that is N dice 0 sum no possible ways so return 0;
        if(Target==0 and N!=0){
            return dp[N][Target]=0;
        }
        
        // target sum is not zero and but dice is zero that is 0 dice target sum no possible ways so return 0;
        if(Target!=0 and N==0){
            return dp[N][Target]=0;
        }
        
        // check our already computed answers
        if(dp[N][Target]!=-1){
            return dp[N][Target];
        }
        
        // as N dice and target sum either has some ways or no ways so for no ways initialize with 0;
        dp[N][Target]=0;
        
        // and check for if there is any possible combinations for current state having N dice and sum target 
        for(int i=1;i<=K;i++){
            if(i<=Target){
                dp[N][Target]=( (dp[N][Target]%mod) + (recursion(N-1,K,Target-i,dp)%mod) )%mod;
            }
        }
        
        // finally return our answer 
        return dp[N][Target]%mod;   
    }
    
    int numRollsToTarget(int n, int k, int target) {
        
        // declare 2d dp table 
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        
        return recursion(n,k,target,dp);
    }
};