class MyCalendar {
public:
    vector<pair<int,int>>st; 
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (auto i : st)
        {
            if (i.second>start&&i.first<end)
                return false; 
        }
        st.push_back({start , end}); 
        return true ; 
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */