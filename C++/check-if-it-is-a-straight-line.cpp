class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for(int i = 1; i < coordinates.size()-1; i++){
            int x1 = coordinates[i][0]-coordinates[i-1][0];
            int y1 = coordinates[i][1]-coordinates[i-1][1];
            int x2 = coordinates[i+1][0]-coordinates[i][0];
            int y2 = coordinates[i+1][1]-coordinates[i][1];
            if(y1*x2 != x1*y2) return false;
        }
        return true;
    }
};