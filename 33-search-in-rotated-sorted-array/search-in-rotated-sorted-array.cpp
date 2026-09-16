class Solution {
public:
    int search(vector<int>& nums, int target) {

        int st_point = 0;
        int end_point = nums.size() - 1;

        while (st_point <= end_point) {

            int mid = st_point + (end_point - st_point) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[st_point] <= nums[mid]) {

                if (nums[st_point] <= target && target < nums[mid]) {
                    end_point = mid - 1;
                }
                else {
                    st_point = mid + 1;
                }
            }

            else {

                if (nums[mid] < target && target <= nums[end_point]) {
                    st_point = mid + 1;
                }
                else {
                    end_point = mid - 1;
                }
            }
        }

        return -1;
    }
};