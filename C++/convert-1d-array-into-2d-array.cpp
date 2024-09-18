class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> solution;
        if(m*n > original.size() || m*n < original.size()) {return {};}
        vector<int> temp;
        int cnt = 0;
        for(int i = 0; i < original.size(); i++){
            cnt++;
            temp.push_back(original[i]);
            if(cnt == n){
                solution.push_back(temp);
                temp.clear();
                cnt = 0;
            }
        }
        return solution;
    }
};