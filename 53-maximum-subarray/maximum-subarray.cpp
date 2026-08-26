class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int CurrentSum = 0;
        int MaxSum = INT_MIN;

        for (int i : nums) {

            CurrentSum = CurrentSum + i;

            MaxSum = max(CurrentSum, MaxSum);

            if (CurrentSum < 0) {
                CurrentSum = 0;
            }
        }

        return MaxSum;
    }
};