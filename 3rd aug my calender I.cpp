class MyCalendar {
public:
    
    set<pair<int, int>>s;
    MyCalendar() {
        
       ios_base::sync_with_stdio(0);
        cin.tie(NULL);cout.tie(NULL);
        
    }
    
    bool book(int a, int b) {
        
       auto it = s.lower_bound({a,b});
        
        if(it!=s.end()&&it->first<b) return 0;
        if(it!=s.begin()&&(--it)->second>a) return 0;
        
        s.insert({a,b});
        return 1;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */