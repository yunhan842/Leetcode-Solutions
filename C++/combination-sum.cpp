class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> sol;
        listOfSums(result, sol, candidates, target, 0, 0);
        return result;
    }
    void listOfSums(vector<vector<int>>& sums, vector<int>& singleSum, vector<int>& candidates, int target, int sum, int index){
        if(sum == target){
            sums.push_back(singleSum);
            return;
        }
        if(sum > target){
            return;
        }
        for(int i = index; i < candidates.size(); i++){
            singleSum.push_back(candidates[i]);
            listOfSums(sums, singleSum, candidates, target, sum+candidates[i], i);
            singleSum.pop_back();
        }
    }
};