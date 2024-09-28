class MyCircularDeque {
public:
    vector<int>v; 
    int l , r ; 
    int s ; 
    int x = 0 ; 
    MyCircularDeque(int k) {
        v.resize(2*k+2);
        l = k  , r=k+1 ; 
        s = k ; 
    }
    
    bool insertFront(int value) {
        if (x>=s)
            return false; 
        v[r]=value ;
        x++; 
        r++; 
        return true; 
    }
    bool insertLast(int value) {
        if (x>=s)
            return false; 
        v[l]=value ;
        x++; 
        l--; 
        return true; 
    }
    
    bool deleteFront() {
        if (x>0)
        {
            r--; 
            x--; 
            return true; 
        }
        
        return false; 
    }
    
    bool deleteLast() {
        if (x>0)
        {
            l++;
            x--; 
            return true; 
        }
        return false;
    }
    
    int getFront() {
        cout<<l<<" "<<r;
        if (r-l>1)
        {
            
           return v[r-1]; 
        }
        return -1;
    }
    
    int getRear() {
        cout<<l<<" "<<r; 
        if (r-l>1)
        {
            
            return v[l+1]; 
        }
        return -1;
    }
    
    bool isEmpty() {
        return (x==0); 
    }
    
    bool isFull() {
        return x==s; 
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */