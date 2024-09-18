class Solution {
    public int lengthOfLastWord(String s) {
        String str = s.trim();
        int count = 0;
        for(int i = str.length()-1; i > -1; i--){
            if(str.charAt(i) != ' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
}