/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1 = getLength(headA), size2 = getLength(headB);
        while(size1 > size2){
            headA = headA->next;
            size1--;
        }
        while(size2 > size1){
            headB = headB->next;
            size2--;
        }
        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
    int getLength(ListNode* temp){
        ListNode* curr = temp;
        int size = 0;
        while(curr){
            curr = curr->next;
            size++;
        }
        return size;
    }
};