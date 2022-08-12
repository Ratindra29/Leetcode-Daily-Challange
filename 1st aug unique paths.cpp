class Solution {
public:
    
    int solve(int m,int n,vector<vector<int>> &dp)
    {
       if(m==1&& n==1)
        {
            return 1;
        }
        
        if(dp[m][n]!=-1)
        {
         return dp[m][n];
        }
        
        int up=0;
        int left=0;
           
           if(m>1)
           {
             up=solve(m-1,n,dp);
           }
            if(n>1)
           {
             left=solve(m,n-1,dp);
           }
        
        return dp[m][n]=up+left;
    
    }
    int uniquePaths(int m, int n) {
        
       vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return solve(m,n,dp);
    }
};