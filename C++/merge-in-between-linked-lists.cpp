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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* temp2 = NULL;
        for(int i = 0; i < b; i++){
            if(i == a-1){
                temp2 = temp;
            }
            temp = temp->next;
        }
        temp2->next = list2;
        ListNode* tail = list2;
        while(tail->next != NULL){
            tail = tail->next;
        }
        tail->next = temp->next;
        return list1;   
    }
};