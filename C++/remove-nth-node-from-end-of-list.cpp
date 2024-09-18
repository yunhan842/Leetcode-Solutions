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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* curr = head;
        int size = 0;
        while(curr){
            curr = curr->next;
            size++;
        }
        ListNode* temp = head;
        if(size == n){
            head = head->next;
            delete temp;
        }
        else{
            for(int i = 1; i <= size; i++){
                if(i == size-n){
                    ListNode* toDelete = temp->next;
                    temp->next = temp->next->next;
                    delete toDelete;
                    break;
                }
            temp = temp->next;
            }
        }
        return head;
    }
};