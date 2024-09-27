class MyCalendarTwo {
public:
    map<int,int>mp; 
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        mp[start]+=1; 
        mp[end]-=1; 
        int ac =0 ; 
        for (auto i: mp)
        {
            ac+=i.second; 
            if (ac>2)
            {
                mp[start]-=1; 
                mp[end]+=1; 
                return false; 
            }
        }
        return true; 
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */