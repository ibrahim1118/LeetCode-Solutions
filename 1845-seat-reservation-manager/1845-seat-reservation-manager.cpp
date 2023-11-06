class SeatManager {
public:
    set<int>st; 
    SeatManager(int n) {
        for (int i=1;i<=n;i++)
            st.insert(i); 
    }
    
    int reserve() {
        int a ; 
        for (auto i : st)
        {
            a = i; 
            break; 
        }
        st.erase(a); 
        return a; 
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber); 
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */