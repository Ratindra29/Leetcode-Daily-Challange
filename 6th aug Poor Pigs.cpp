class Solution {
public:
    int poorPigs(int buckets, int poisonTime, int totalTime) {
        
        //t= no of tests ==> total time /time to die
        
        // t+1 out comes possible for each pig. it can die in any of t test or it cannot die;
        
        //let no of pig = p; 
        // now (t+1)^p>=no of buckets
        
         return ceil(log10(buckets) / log10(totalTime / poisonTime + 1));
        
    }
};