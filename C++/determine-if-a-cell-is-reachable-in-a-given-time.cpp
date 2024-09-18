class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int length = abs(sx-fx);
        int width = abs(sy-fy);
        if(length==0 && width==0 && t==1){return false;}
        return t>=max(length, width);
    }
};