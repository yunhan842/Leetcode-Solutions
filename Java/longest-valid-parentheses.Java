class Solution {
    public int longestValidParentheses(String s) {
        Stack<Integer> stack = new Stack<Integer>();
        int a = 0;
        for(int i = 0, b = 0; i<s.length(); i++) {
            if(s.charAt(i) == '(')stack.push(b);
            else if(!stack.isEmpty()){
                a = Math.max(a, i - (b = stack.pop()) + 1);
                continue;
            }
            b = i + 1;
        }
        return a;
    }
}
