/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> sol(m, vector<int>(n, -1));
        int movement[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        ListNode* temp = head;
        int i = 0, j = 0, k = 0;
        while(temp){
            sol[i][j] = temp->val;
            int nextX = i + movement[k][0], nextY = j + movement[k][1];
            if(min(nextX, nextY) < 0 || nextX >= m || nextY >= n || sol[nextX][nextY] != -1){
                k = (k+1) % 4;
            }
            i += movement[k][0];
            j += movement[k][1];
            temp = temp->next;    
        }
        return sol;
    }
};