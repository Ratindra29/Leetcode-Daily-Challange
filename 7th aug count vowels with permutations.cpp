class Solution {
public:
    vector<vector<int>> relation = {{1},{0,2},{0,1,3,4},{2,4},{0}};
    int mod=1e9+7;
    // int t[100005][5];
    // int solve(int n, int v)
    // {
    //     if(n==1) return 1;
    //     if(t[n][v]!=-1)
    //         return t[n][v];
    //     t[n][v]=0;
    //     for(int& i:relation[v])
    //         t[n][v]+=solve(n-1, i), t[n][v]%=mod;
    //     return t[n][v];
    // }
    int countVowelPermutation(int n) {
        int res=0;
        // memset(t, -1, sizeof(t));
        // for(int i=0;i<5;i++)
        //     res+=solve(n, i), res%=mod;
        // return res;
        
        int t[n+1][5];
        for(int i=0;i<5;i++)
            t[1][i]=1;
        
        for(int i=1;i<n;i++)
        {
            for(int u=0;u<5;u++)
            {
                t[i+1][u]=0;
                for(int& v:relation[u])
                    t[i+1][u]+=t[i][v], t[i+1][u]%=mod;
            }
        }
        
        for(int i=0;i<5;i++)
            res=(res+t[n][i])%mod;
        return res;
    }
};