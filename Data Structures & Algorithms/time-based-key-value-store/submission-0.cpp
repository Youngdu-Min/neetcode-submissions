class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back(make_pair(value, timestamp));
        sort(m[key].begin(), m[key].end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
            });
    }
    
    string get(string key, int timestamp) {
        auto& arr = m[key];
        int left = 0;
        int right = arr.size() - 1;
        string str = "";

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid].second > timestamp) {
            right = mid - 1;
        } else {
            left = mid + 1;
            str = arr[mid].first;
        }
    }

    return str;
    }
};
