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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        ListNode* start = new ListNode(0, head);
        ListNode* curr = start;
        while(curr->next != NULL){
            if(curr->next->val == val){
                if(curr->next == head){
                    head = head->next;
                }
                else{
                    curr->next = curr->next->next;
                }
            }
            else{
                curr = curr->next;
            }
        }
        ListNode* del = start;
        start = start->next;
        delete del; 
        return start;
    }
};