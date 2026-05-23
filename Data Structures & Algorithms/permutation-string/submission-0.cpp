class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> windowMap;
        unordered_map<char, int> s1Map;
        int l = 0;

        for (int idx = 0; idx < s1.size(); idx++) {
            s1Map[s1[idx]]++;
            windowMap[s2[idx]]++;
        }

        if (windowMap == s1Map) return true;

        for (int idx = s1.size(); idx < s2.size(); idx++) {
            windowMap[s2[idx]]++;
            windowMap[s2[l]]--;

            if (windowMap[s2[l]] == 0) {
                windowMap.erase(s2[l]);
            }
            l++;

            if (windowMap == s1Map) return true;
        }

        return false;
    }
};
