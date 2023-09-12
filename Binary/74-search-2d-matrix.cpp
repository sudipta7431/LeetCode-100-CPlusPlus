class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int row = matrix.size();
    int column = matrix[0].size();
    if (row == 0) {
      return false;
    }
    int s = 0, e = (row * column) - 1, mid;
    while (s <= e) {
      mid = s + (e - s) / 2;
      if (matrix[mid / column][mid % column] == target) {
        return true;
      } else if (matrix[mid / column][mid % column] > target) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    }
    return false;
  }
};
