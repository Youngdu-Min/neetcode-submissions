class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sortedStrs;
        unordered_map<string, int> group;
        vector<vector<string>> resultGroup = {};
        for(int idx = 0; idx < strs.size(); idx++)
        {
            string str = strs[idx];
            sort(str.begin(), str.end());
            sortedStrs.push_back(str);
            cout << "Target: " << str;

            auto exist = group.find(str);
            if(exist != group.end())
            {
                cout << " -> exist (value: " << exist->second << ")" << endl;
                resultGroup[exist->second].push_back(strs[idx]);
                continue;
            }
            
            // 기존 로직 유지
            group[str] = resultGroup.size();
            resultGroup.push_back({strs[idx]});
            cout << " -> non exist (mapped: group[" << strs[idx] << "] = " << idx << ")" << endl;

            // [추가된 로그] 현재 group 맵에 들어있는 모든 데이터 출력
            cout << "   [Current Group Map] ";
            for (auto it = group.begin(); it != group.end(); ++it) {
                cout << "{" << it->first << ": " << it->second << "} ";
            }
            cout << endl;
        }

        return resultGroup;
    }
};