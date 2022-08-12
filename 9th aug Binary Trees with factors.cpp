long long mod=1e9+7;

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        vector<long long int>dp(arr.size(),1);
        sort(arr.begin(),arr.end());
        
        unordered_map<int,int>m;
         for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=i;
        }
        
        
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<i;j++)
            {
               if(arr[i]%arr[j]==0) 
               {
                   auto it = m.find(arr[i]/arr[j]);
                   
                   if(it!=m.end())
                   {
                       dp[i]=(dp[i]+(dp[j]*dp[it->second])%mod)%mod;
                   }
               }
            }
        }
        
        int ans=0;
        
        
        for(int i=0;i<arr.size();i++)
        {
            ans=(ans+dp[i])%mod;
        }
        
        return ans;
        
    }
};