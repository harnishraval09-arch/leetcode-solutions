class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            int subarrays = 1;
            int currSum = 0;

            for (int num : nums) {
                if (currSum + num > mid) {
                    subarrays++;
                    currSum = num;
                } else {
                    currSum += num;
                }
            }

            if (subarrays <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};