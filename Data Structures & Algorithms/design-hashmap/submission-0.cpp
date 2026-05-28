class MyHashMap {
   public:
    vector<pair<int, int>> maps;
    MyHashMap() {}

    void put(int key, int value) {
        for (int idx = 0; idx < maps.size(); idx++) {
            if (maps[idx].first == key) {
                maps[idx].second = value;
                return;
            }
        }
        maps.push_back(tuple<int, int>{key, value});
    }

    int get(int key) {
        for (int idx = 0; idx < maps.size(); idx++) {
            if (maps[idx].first == key) {
                return maps[idx].second;
            }
        }

        return -1;
    }

    void remove(int key) {
        for (int idx = 0; idx < maps.size(); idx++) {
            if (maps[idx].first == key) {
                maps.erase(maps.begin() + idx, maps.begin() + idx + 1);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */