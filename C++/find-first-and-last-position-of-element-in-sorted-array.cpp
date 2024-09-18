class Solution {
public:
    int binSearch(vector<int>& nums, int target, bool lastOcc){
        int high = nums.size()-1, low = 0;
        int ans = -1;
        while(high >= low){
            int mid = (high+low)/2;
            if(nums[mid] == target){
                ans = mid;
                if(lastOcc){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> solution = {-1, -1};
        solution[0] = binSearch(nums, target, false);
        solution[1] = binSearch(nums, target, true);
        return solution;
    }
};