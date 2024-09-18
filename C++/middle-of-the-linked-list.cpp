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
    ListNode* middleNode(ListNode* head) {
        int n = 0; 
        ListNode* temp = head;
        while(head != nullptr){
            n++;
            head = head->next;
        }
        int idx = n/2;
        while(idx--){
            temp = temp->next;
        }
        return temp;
    }
};