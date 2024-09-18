class Solution {
    public int countHomogenous(String s) {
        int num = 0, streak = 0, mod = (int) 1e9+7;
        for(int i = 0; i < s.length(); i++){
            if(i == 0 || s.charAt(i) == s.charAt(i - 1)){
                streak++;
            }
            else{
                streak = 1;
            }
            num = (num + streak) % mod;
        }
        return num;
    }
}