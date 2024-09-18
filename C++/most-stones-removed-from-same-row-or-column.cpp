class Solution {
public:
    void dfs(vector<vector<int>>& stones, vector<bool>& visited, int index, int count, int& removed){
        visited[index] = true;
        for(int i = 0; i < count; i++){
            if(!visited[i]){
                if(stones[index][0] == stones[i][0] || stones[index][1] == stones[i][1]){
                    removed++;
                    dfs(stones, visited, i, count, removed);
                }
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int count = stones.size();
        vector<bool> visited(count);
        int removed = 0;
        for(int i = 0; i < count; i++){
            if(!visited[i]){
                dfs(stones,visited,i,count, removed);
            }
        }
        return removed;
    }
};