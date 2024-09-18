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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* evens = head->next;
        ListNode* odds = head;
        ListNode* link = evens;
        while(evens != NULL && evens->next != NULL){
            odds->next = odds->next->next;
            evens->next = evens->next->next;
            odds = odds->next;
            evens = evens->next;
        }
        odds->next = link;
        return head;
    }
};