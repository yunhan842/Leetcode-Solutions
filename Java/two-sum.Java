class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0; i < nums.length; i++){
            int valueOne = nums[i];
            for(int k = i + 1; k < nums.length; k++){
                int valueTwo = nums[k];
                if(valueOne + valueTwo == target){
                    return new int[] {i, k};
                }
            }  
        }
        return null;
    }
}