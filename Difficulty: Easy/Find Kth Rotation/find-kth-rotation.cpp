class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // if mid element is greater than end, minimum is in right half
            if (arr[mid] > arr[end]) {
                start = mid + 1;
            }
            // else minimum is in left half including mid
            else {
                end = mid;
            }
        }

        return start;  // index of the minimum element
    }
};
