class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> mergeNums = {};
        int nums1Idx = 0;
        int nums2Idx = 0;

        while (nums1Idx < m && nums2Idx < n) {
            if (nums1[nums1Idx] <= nums2[nums2Idx]) {
                mergeNums.push_back(nums1[nums1Idx++]);
            } else {
                mergeNums.push_back(nums2[nums2Idx++]);
            }
        }

        // 남은 요소들 추가
        while (nums1Idx < m) {
            mergeNums.push_back(nums1[nums1Idx++]);
        }
        while (nums2Idx < n) {
            mergeNums.push_back(nums2[nums2Idx++]);
        }

        nums1 = mergeNums;
    }
};