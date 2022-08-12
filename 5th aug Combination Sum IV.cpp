class Solution {
public:
    
    int solve(vector<int>&nums,int target,int sum,vector<int> &dp)
    {
        if(sum==target)
        {
            return 1;
        }
        
        if(sum>target)
        {
            return 0;
        }
        
        if(dp[sum]!=-1)
        {
            return dp[sum];
        }
        
        int ways=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=target)
            {
                ways+=solve(nums,target,sum+nums[i],dp);
            }
        }
        
        return dp[sum]=ways;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int>dp(target+1,-1);
        
        return solve(nums,target,0,dp);
        
    }
};