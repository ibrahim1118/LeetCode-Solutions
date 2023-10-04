public class MyHashMap {
    int [] mp; 
    public MyHashMap() {
        mp = new  int[1000_000+7]; 
        Array.Fill(mp,-1); 
    }
    
    public void Put(int key, int value) {
        mp[key] = value; 
    }
    
    public int Get(int key) {
        return mp[key]; 
    }
    
    public void Remove(int key) {
        mp[key]=-1; 
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.Put(key,value);
 * int param_2 = obj.Get(key);
 * obj.Remove(key);
 */