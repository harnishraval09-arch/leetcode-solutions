class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a =0;
        for(int var : nums){
            a = a^var;
        }
    return a;
    }
};