class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int size = nums.size();
        for(int idx = 0; idx < size; idx++)
        {
            nums.push_back(nums[idx]);
        }
        return nums;
    }
};