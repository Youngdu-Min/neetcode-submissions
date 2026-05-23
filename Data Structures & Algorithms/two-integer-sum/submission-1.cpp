class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for(int idx = 0; idx < nums.size(); idx++)
        {
            int sumLeft = target - nums[idx];
            if(numMap.find(sumLeft) != numMap.end())
            {
                return {numMap[sumLeft], idx};
            }
            numMap[nums[idx]] = idx;
        }

        return {-1,-1};
    }
};
