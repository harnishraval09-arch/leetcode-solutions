class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int start = 0;
        int last = nums.size() - 1;

        while (start <= last) {
            int mid = start + (last - start) / 2;

            if ((mid == 0 || nums[mid] != nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            if (mid % 2 == 0) {
                if (mid < last && nums[mid] == nums[mid + 1]) {
                    start = mid + 2;
                }
                else {
                    last = mid - 1;
                }
            }
            else {
                if (nums[mid] == nums[mid - 1]) {
                    start = mid + 1;
                }
                else {
                    last = mid - 1;
                }
            }
        }

        return 0;
    }
};