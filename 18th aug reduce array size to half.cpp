class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
       unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        int sum = 0;
        int ans=0;
        
        
        priority_queue<int>p;
        
        for(auto it:m)
        {
            
           p.push(it.second);
        }
        
        while(1)
        {
            //cout<<p.top()<<" ";
            sum+=p.top();
            p.pop();
            ans++;
            if(sum>=arr.size()/2)
            {
                return ans;
            }
        }
        
        
        return ans;
        
        
        
    }
};