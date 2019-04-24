class LRUCache {
public:
    unordered_map<int, pair<int,int>>hash;
    int cnt;
    int capacity;
    LRUCache(int capacity) {
        this->hash = unordered_map<int, pair<int,int>>();
        this->cnt = 0;
        this->capacity = capacity;
    }
    
    int get(int key) {
        this->cnt++;
        if(this->hash.count(key)) {
            this->hash[key] = make_pair(this->hash[key].first, this->cnt);
            return this->hash[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        this->cnt++;
        this->hash[key] = make_pair(value, cnt);
        
        if(this->hash.size() > this->capacity) {
            int k = -1;
            int mn = 1e9;
            for(unordered_map<int,pair<int,int>>::iterator it = this->hash.begin(); it != this->hash.end(); it++) 
                if(it->second.second < mn) {
                    mn = it->second.second;
                    k = it->first;
                }
            this->hash.erase(k);
        }
        
    }               
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
