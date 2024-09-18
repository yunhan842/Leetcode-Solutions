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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next){
            int x = temp->val, y = temp->next->val;
            int factor = gcd(x, y);
            ListNode* node = new ListNode(factor, temp->next);
            temp->next = node;
            temp = temp->next->next;
        }
        return head;
    }
    int gcd(int a, int b){
        if (a == 0) return b;
        return gcd(b % a, a);
    }
};