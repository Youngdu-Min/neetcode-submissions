class LRUCache {
   public:
    vector<pair<int, int>> cacheList;
    unordered_map<int, int> keyValue;
    int cap = 0;

    LRUCache(int capacity) { cap = capacity; }

    int get(int key) {
        if (keyValue.find(key) == keyValue.end()) {
            return -1;
        }
        for (int i = 0; i < cacheList.size(); i++) {
            if (cacheList[i].first == key) {
                cacheList.erase(cacheList.begin() + i);
                break;
            }
        }
        cacheList.insert(cacheList.begin(), {key, keyValue[key]});

        return keyValue[key];
    }

    void put(int key, int value) {
        if (keyValue.find(key) != keyValue.end()) {
            for (int i = 0; i < cacheList.size(); i++) {
                if (cacheList[i].first == key) {
                    cacheList.erase(cacheList.begin() + i);
                    break;
                }
            }
            keyValue.erase(key);
        }

        if (cacheList.size() == cap) {
            int eraseKey = cacheList.back().first;
            cacheList.pop_back();
            keyValue.erase(eraseKey);
        }

        cacheList.insert(cacheList.begin(), {key, value});
        keyValue[key] = value;
    }
};
