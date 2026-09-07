class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        
        int Left = 1;
        int Right = 1;

        for(int i = 1; i< nums.size();i++){
            Left = Left*nums[i-1];
            ans[i] = Left;
            
        }
        for(int i = nums.size()-2; i>= 0;i--){
            Right = Right*nums[i+1];
            ans[i] = ans[i]*Right;
        }
        return ans;
    }
};