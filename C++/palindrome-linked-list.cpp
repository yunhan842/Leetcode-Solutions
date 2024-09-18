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
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        ListNode* temp = head;
        while(temp){
            vals.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 0; i <= vals.size()/2; i++){
            int left = vals[i];
            int right = vals[vals.size()-i-1];
            if(left != right){
                return false;
            }
        }
        return true;
    }
};