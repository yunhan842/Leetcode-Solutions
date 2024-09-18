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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* start = new ListNode(0, head);
        ListNode* temp = start;
        while(temp != NULL){
            ListNode* start = temp->next;
            int sum = 0;
            while(start != NULL){
                sum+=start->val;
                start = start->next;
                if(sum == 0){
                    temp->next = start;
                }
            }
            temp = temp->next;
        }
        head = start->next;
        delete start;
        return head;
    }
};