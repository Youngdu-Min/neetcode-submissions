class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        return QuickSort(nums);
    }

    std::vector<int> QuickSort(std::vector<int>& arr) {
        int n = arr.size();

        if (n <= 1) {
            return arr;
        }

        int pivot = arr[n / 2];
        // 중복된 값을 담을 equal 벡터 추가
        std::vector<int> left, equal, right;

        for (int x : arr) {
            if (x < pivot) {
                left.push_back(x);
            } else if (x > pivot) {
                right.push_back(x);
            } else {
                // pivot과 값이 같은 중복 원소들은 여기에 저장
                equal.push_back(x);
            }
        }

        // left와 right만 재귀적으로 정렬 (equal은 이미 모두 같은 값이므로 정렬 불필요)
        left = QuickSort(left);
        right = QuickSort(right);

        // left 뒤에 equal(중복 값들)을 붙이고, 그 뒤에 right를 붙임
        left.insert(left.end(), equal.begin(), equal.end());
        left.insert(left.end(), right.begin(), right.end());

        return left;
    }
};