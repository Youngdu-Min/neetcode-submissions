class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numFrequent;
        for(const auto& num : nums)
        {
            numFrequent[num]++;
        }

        for (auto it = numFrequent.begin(); it != numFrequent.end(); ++it) 
        {
            cout << "{" << it->first << ": " << it->second << "} ";
        }
        
        cout << endl;    
        
        vector<pair<int, int>> vec(numFrequent.begin(), numFrequent.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Value가 큰 것이 앞으로 오게 함
        });

        vector<int> topK;
        for(int idx = 0; idx < k; idx++)
        {
            topK.push_back(vec[idx].first);
        }

        return topK;
    }
};