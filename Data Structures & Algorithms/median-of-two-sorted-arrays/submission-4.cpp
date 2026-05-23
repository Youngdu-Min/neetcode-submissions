#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 1. 수정: nums1이 항상 더 짧은 배열이 되도록 조건을 '>'로 변경
        if (nums1.size() > nums2.size()) {
            nums1.swap(nums2);
        }
        
        int m = nums1.size();
        int n = nums2.size();

        int left = 0, right = m;

        while (left <= right) {
            // 2. 수정: '+ 1'을 제거하여 표준 이진 탐색 미드값 계산 (무한 루프 방지)
            int i = left + (right - left) / 2;
            int j = (m + n + 1) / 2 - i; 

            // 3. 수정: 인덱스 경계 조건을 자기 자신의 배열 크기(m, n)에 맞게 매칭
            int nums1_1 = (i > 0) ? nums1[i - 1] : INT_MIN;
            int nums1_2 = (i < m) ? nums1[i] : INT_MAX; // i < n 에서 m으로 수정
            int nums2_1 = (j > 0) ? nums2[j - 1] : INT_MIN;
            int nums2_2 = (j < n) ? nums2[j] : INT_MAX; // j < m 에서 n으로 수정

            if (nums1_1 > nums2_2) {
                right = i - 1;
            }
            else if (nums2_1 > nums1_2) {
                left = i + 1;
            }
            else {
                int leftMax = max(nums1_1, nums2_1);
                int rightMin = min(nums1_2, nums2_2);
                
                if ((m + n) % 2 != 0) {
                    return leftMax;
                }
                else {
                    return (leftMax + rightMin) / 2.0;
                }
            }
        }
        return 0.0;
    }
};