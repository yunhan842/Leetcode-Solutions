class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max = INT_MIN, min = INT_MAX;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int k = i + 1; k < nums.size(); k++){
                if((nums[i] * nums[k]) > max){max = nums[i] * nums[k];}
                else if((nums[i] * nums[k]) < min){min = nums[i] * nums[k];}
            }
        }
        return max - min;
    }
};