class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int idx = 0; idx < nums.size(); idx++)
        {
            if(seen.count(nums[idx]))
                return nums[idx];
            seen.insert(nums[idx]); 
        }
    }
};
