class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indices;
        for(int idx = 0; idx < nums.size(); idx++)
        {
            int num = nums[idx];
            if(indices.count(num) != 0 && idx - indices[num] <= k)
            {
                return true;
            }
            indices[num] = idx;
        }

        return false;
    }
};