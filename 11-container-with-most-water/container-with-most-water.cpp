class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxV = 0;
        int a = 0;
        int b = height.size() -1 ;
        while(b > a){

            if( (b-a)*(min(height[a],height[b])) > maxV){
                maxV = (b-a)*(min(height[a],height[b]));
            }

            if (height[a] < height[b]) {
                a++;
            }
            else {
                 b--;
            }
        }
        return maxV;
    }
};