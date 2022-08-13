 class Solution {
public:
    vector<int> findSubstring(string A, vector<string>& words) {
          map<string,int>bmap;
    map<string,int>testmap;
    int n=words[0].size();
    vector<int>ans;
    int n2=words.size();
        
        if(A.size()<n*n2)
        {
           return ans;  
        }
    
    
    for(int i=0;i<words.size();i++)
    {
        bmap[words[i]]++;
    }
    
    for(int i=0;i<=A.size()-n2*n;i++)
    {
        int k=i;
        
       
       while(k<i+n2*n)
       {
           string x= A.substr(k,n);
           if(bmap.find(x)==bmap.end())
           {
              
               break;
           }
           
           testmap[x]++;
           
           if(testmap==bmap)
           {
               ans.push_back(i);
              
              
               
           }
           
           
           
           k+=n;
       }
       
        testmap.clear();
        
        
    }
    
    return ans;
        
    }
};