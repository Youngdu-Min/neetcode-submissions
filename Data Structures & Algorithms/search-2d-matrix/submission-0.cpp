class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int xSize = matrix[0].size();
        int low = 0;
        int high = xSize * matrix.size() - 1;
        int mid = (low + high) / 2;

        while(low <= high)
        {
            int midX = mid % xSize;
            int midY = mid / xSize;

            cout << "matrix: " << matrix[midY][midX] << "| midX: " << midX << "| midY: " << midY << "| mid: " << mid << endl;

            if(matrix[midY][midX] == target)
            {
                return true;
            }
            else if(matrix[midY][midX] < target)
            {
                low = mid + 1;
            }
            else if(matrix[midY][midX] > target)
            {
                high = mid - 1;
            }

            mid = (low + high) / 2;
        }

        return false;
    }
};
