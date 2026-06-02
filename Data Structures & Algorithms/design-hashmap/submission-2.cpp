class MyHashMap {
    unordered_map<int, int> umap;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        umap[key] = value;
    }
    
    int get(int key) {
        auto it = umap.find(key);
        if(it != umap.end()) return umap[key];
        return -1;
    }
    
    void remove(int key) {
        auto it = umap.find(key);
        if(it != umap.end())
            umap.erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */