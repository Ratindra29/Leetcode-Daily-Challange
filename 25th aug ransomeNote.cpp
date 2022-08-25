class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length())
        {
            return false;
        }
        
        vector<int>v(26,0);
        
        for(int i=0;i<magazine.size();i++)
        {
            v[magazine[i]-'a']++;
        }
        
        for(int i=0;i<ransomNote.size();i++)
        {
            v[ransomNote[i]-'a']--;
            
            if(v[ransomNote[i]-'a']<0)
            {
                return false;
            }
        }
        
        return true;
        
    }
};