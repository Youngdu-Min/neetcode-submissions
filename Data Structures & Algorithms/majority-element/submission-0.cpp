class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> valueMap;

        for(int idx = 0; idx < nums.size(); idx++)
        {
            valueMap[nums[idx]]++;
            if(valueMap[nums[idx]] > nums.size() / 2)
            {
                return nums[idx];
            }
        }
    }
};