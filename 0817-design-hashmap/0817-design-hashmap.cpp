class MyHashMap {
public:
    vector<int> mp;
    MyHashMap() {
        mp.assign(1000000+1,-1);
    }
    
    void put(int k, int v) {
        mp[k] = v;
    }
    
    int get(int k) {
        if(mp[k]!=-1)
            return mp[k];

            return -1;
    }
    
    void remove(int k) {
        mp[k] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(k,value);
 * int param_2 = obj->get(k);
 * obj->remove(k);
 */