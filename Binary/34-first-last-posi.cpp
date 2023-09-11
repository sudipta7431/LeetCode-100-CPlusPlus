class Solution {
public:
  int first(vector<int> nums, int target, int size) {
    int s = 0, e = size - 1, mid, ans = -1;
    while (s <= e) {
      mid = s + (e - s) / 2;
      if (nums[mid] == target) {
        ans = mid;
        e = mid - 1;
      } else if (nums[mid] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return ans;
  }

  int last(vector<int> nums, int target, int size) {
    int s = 0, e = size - 1, mid, ans = -1;
    while (s <= e) {
      mid = s + (e - s) / 2;
      if (nums[mid] == target) {
        ans = mid;
        s = mid + 1;
      } else if (nums[mid] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return ans;
  }

  vector<int> searchRange(vector<int> &nums, int target) {
    int size = nums.size();
    vector<int> ans = {first(nums, target, size), last(nums, target, size)};
    return ans;
  }
};
