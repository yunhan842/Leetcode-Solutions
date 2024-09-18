class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        bt(res, nums, 0);
        return res;
    }
    void bt(vector<vector<int>>& result, vector<int>& nums, int index){
        if(nums.size() == index){
            result.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[i], nums[index]);
            bt(result, nums, index+1);
            swap(nums[index], nums[i]);
        }
    }
};