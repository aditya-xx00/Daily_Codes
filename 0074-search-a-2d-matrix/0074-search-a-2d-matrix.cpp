class Solution {
public:
    bool BS(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if target is in this row
            if (target >= mat[mid][0] && target <= mat[mid][m - 1]) {
                return BS(mat[mid], target);
            }

            if (target < mat[mid][0]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return false;
    }
};
