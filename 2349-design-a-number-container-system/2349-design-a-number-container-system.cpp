class NumberContainers {
public:
    map<int,int>mp; 
    map<int, set<int>>mp2; 
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        int num = mp[index]; 
        mp2[num].erase(index); 
        mp2[number].insert(index);
        mp[index] = number; 
    }
    
    int find(int number) {
        if (mp2[number].size()==0)
            return -1; 
        for (auto i : mp2[number])
               return i; 
        return -1; 
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */