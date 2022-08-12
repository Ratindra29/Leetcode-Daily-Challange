class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int>sub;
        sub.push_back(nums[0]);
        int ans=1;
        
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]>sub.back())
            {
                sub.push_back(nums[i]);
                ans++;
            }
            else
            {
              int id=lower_bound(sub.begin(),sub.end(),nums[i])-sub.begin();
                sub[id]=nums[i];  
            }
            
            
              
           
           
        }
        
        return ans;
        
    }
};