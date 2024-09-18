class Solution {
    public boolean isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int length = Math.abs(sx - fx);
        int width = Math.abs(sy - fy);
        if(length == 0 && width == 0 && t == 1){ return false; }
        return t >= Math.max(length, width);
    }
}