class Solution {
    public boolean isMonotonic(int[] nums) {
        boolean decreasing = true;
        boolean increasing = true;
        for(int i = 1; i < nums.length; i++){
            if(nums[i] > nums[i-1]){
                decreasing = false;
            }
            else if(nums[i] < nums[i-1]){
                increasing = false;
            }
            if(!(decreasing || increasing)){
                return false;
            }
        }
        return true;
    }
}