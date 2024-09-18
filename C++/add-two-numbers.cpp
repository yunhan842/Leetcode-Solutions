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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode;
        ListNode* curr = head;
        int carryDigit = 0;
        while(l1 != nullptr || l2 != nullptr || carryDigit != 0){
            int first = l1 ? l1->val:0, second = l2 ? l2->val:0;
            int sum = carryDigit + first + second;
            carryDigit = sum/10;
            int res = sum%10;
            curr->next = new ListNode(res);
            curr = curr->next;
            l1 = l1 ? l1->next: nullptr, l2 = l2 ? l2->next: nullptr;
        }
        ListNode* sol = head->next;
        delete head;
        return sol;
    }
};