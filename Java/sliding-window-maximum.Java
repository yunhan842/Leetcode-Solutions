class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int a = nums.length, i = 0;
        int[] myArray = new int[a-k+1];
        Deque<Integer> dq = new ArrayDeque<Integer>();
        for(int j = 0; j < a; j++){
            while(dq.size() > 0 && dq.peekFirst() <= j-k){
                dq.pollFirst();
            }
            while(dq.size() > 0 && nums[dq.peekLast()] < nums[j]){
                dq.pollLast();
            }
            dq.offerLast(j);
            if(j >= k - 1){myArray[i++] = nums[dq.peekFirst()];}
        }
        return myArray;
    }
}