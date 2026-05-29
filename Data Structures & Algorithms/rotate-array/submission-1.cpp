class Solution {
   public:
    void rotate(vector<int>& nums, int k) {
        for (int ct = 0; ct < k; ct++) {
            nums.insert(nums.begin(), nums[nums.size() - 1]);
            nums.pop_back();
        }
    }
};