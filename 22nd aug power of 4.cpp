class Solution {
public:
    bool isPowerOfFour(int n) {
        
        int count=0;
        
        for(int i=31;i>=0;i--)
        {
            if(n&1<<i)
            {
                count++;
                if(i%2!=0)
                {
                    return false;
                }
            }
        }
        
        if(count==1)
        {
            return true;
        }
        
        return false;
        
    }
};