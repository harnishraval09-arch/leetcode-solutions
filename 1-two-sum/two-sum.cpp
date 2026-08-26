class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> vec;
        for (int i =0; i< nums.size();i++){
            for( int j =0;j < nums.size();j++ ){
                if (i == j){
                    continue;
                }
                if( nums[i] + nums[j] == target){
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return {};
    }
};