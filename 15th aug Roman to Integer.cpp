class Solution {
public:
    int romanToInt(string A) {
        int ans=0;
    for(int i=0;A[i];i++){
        if(A[i]=='M') ans+=1000; 
        else if(A[i]=='D'){
            if(A[i+1]&&A[i+1]=='M') ans-=500;
            else ans+=500;
        }
        else if(A[i]=='C') {
            if(A[i+1]&&(A[i+1]=='D'||A[i+1]=='M')) ans-=100;
            else ans+=100; 
        }
        else if(A[i]=='L') {
            if(A[i+1]&&(A[i+1]=='D'||A[i+1]=='M'||A[i+1]=='C')) ans-=50;
            else ans+=50;
        }
        else if(A[i]=='X'){
            if(A[i+1]&&(A[i+1]=='D'||A[i+1]=='M'||A[i+1]=='C'||A[i+1]=='L')) ans-=10;
            else ans+=10; 
        }
        else if(A[i]=='V') {
            if(A[i+1]&&(A[i+1]!='I'&&A[i+1]!='V')) ans-=5;
            else ans+=5; 
        }
        else{
            if(A[i+1]&&A[i+1]!='I'){
                ans--;
            }
            else ans++;
        }
    }
    return ans;
        
    }
};
    